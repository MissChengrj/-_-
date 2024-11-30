#include "my_rviz_panel.hpp"
#include <QLabel>
#include <QHBoxLayout>
#include <pluginlib/class_list_macros.hpp>

namespace my_rviz_plugin {

MyRvizPanel::MyRvizPanel(QWidget* parent)
  : rviz_common::Panel(parent) {
  node_ = std::make_shared<rclcpp::Node>("rviz_plugin_tutorials_node");
  client_ = node_->create_client<test_2_interfaces::srv::Num>("/add_multiply_service");

  // Create UI components
  a_input_ = new QLineEdit;
  b_input_ = new QLineEdit;
  c_input_ = new QLineEdit;
  operation_input_ = new QLineEdit;
  send_button_ = new QPushButton("Send Request");

  // Set layout
  layout_ = new QVBoxLayout;
  layout_->addWidget(new QLabel("A:"));
  layout_->addWidget(a_input_);
  layout_->addWidget(new QLabel("B:"));
  layout_->addWidget(b_input_);
  layout_->addWidget(new QLabel("C:"));
  layout_->addWidget(c_input_);
  layout_->addWidget(new QLabel("Operation:"));
  layout_->addWidget(operation_input_);
  layout_->addWidget(send_button_);
  setLayout(layout_);

  // 将按键与发送信号连接
  connect(send_button_, &QPushButton::clicked, this, &MyRvizPanel::onButtonClicked);
}

MyRvizPanel::~MyRvizPanel() = default;

void MyRvizPanel::onButtonClicked() {
  if (!client_->wait_for_service(std::chrono::seconds(1))) {
    RCLCPP_ERROR(node_->get_logger(), "Service not available.");
    return;
  }

  auto request = std::make_shared<test_2_interfaces::srv::Num::Request>();
  request->a = a_input_->text().toFloat();
  request->b = b_input_->text().toFloat();
  request->c = c_input_->text().toFloat();
  request->operation = operation_input_->text().toStdString();

  auto future = client_->async_send_request(request);
  try {
    auto response = future.get();
    send_button_->setText(QString::number(response->result));
  } catch (const std::exception& e) {
    RCLCPP_ERROR(node_->get_logger(), "Service call failed: %s", e.what());
  }
}

}  // namespace my_rviz_plugin

// // 在 MyRvizPanel 类声明之后
// PLUGINLIB_EXPORT_CLASS(rviz_plugin_tutorials::MyRvizPanel, rviz_common::Panel)

PLUGINLIB_EXPORT_CLASS(my_rviz_plugin::MyRvizPanel, rviz_common::Panel)
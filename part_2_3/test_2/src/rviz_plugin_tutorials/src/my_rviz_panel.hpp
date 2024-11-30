#ifndef MY_RVIZ_PLUGIN_MY_RVIZ_PANEL_HPP_
#define MY_RVIZ_PLUGIN_MY_RVIZ_PANEL_HPP_

#include <rviz_common/panel.hpp>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <rclcpp/rclcpp.hpp>
#include <test_2_interfaces/srv/num.hpp>

namespace my_rviz_plugin {

class MyRvizPanel : public rviz_common::Panel {
  Q_OBJECT

public:
  explicit MyRvizPanel(QWidget* parent = nullptr);
  ~MyRvizPanel() override;

protected slots:
  void onButtonClicked();

private:
  QLineEdit* a_input_;
  QLineEdit* b_input_;
  QLineEdit* c_input_;
  QLineEdit* operation_input_;
  QPushButton* send_button_;
  QVBoxLayout* layout_;

  rclcpp::Node::SharedPtr node_;
  rclcpp::Client<test_2_interfaces::srv::Num>::SharedPtr client_;
};

}  // namespace my_rviz_plugin

#endif  // MY_RVIZ_PLUGIN_MY_RVIZ_PANEL_HPP_

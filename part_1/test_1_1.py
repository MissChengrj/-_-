#python3.8
class Calculate:                                    #定义Calculate类，包含方法sum_num,product_num分别用于计算输入list的和，积
    def sum_num(self, num_list):
        result = 0
        for num in num_list:
            result += num
        return result

    def product_num(self, num_list):
        result = 1
        for num in num_list:
            result *= num
        return result

if __name__ == "__main__":
    calcul_obj = Calculate()                                                #创建一个对象
    operation = input("选择操作（求和：sum，求积：product）: ")                  #接收操作指令
    num_list = list(map(float, input("输入数值（以空格为分隔符）: ").split()))     #接收输入数据
    if operation == "sum":
        print("求和结果：", calcul_obj.sum_num(num_list))
    elif operation == "product":
        print("求积结果：", calcul_obj.product_num(num_list))
    else:
        print("无效的操作")
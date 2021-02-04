class newCal:
    def __init__(self):
        self.result = 0
        print("---------생성됨")
    
    def sum(self, num):
        self.result += num

    def mul(self, num):
        self.result *= num
    
    def get_info(self):
        print(self.result)

    def reset_result(self):
        self.result = 0
        print("초기화 되었습니다.")

    def otherNum(self, cls):
        self.result += cls.result
    

cal_1 = newCal()
print(cal_1.result)

cal_1.sum(10)
cal_1.sum(20)
cal_1.sum(20)


cal_1.get_info()
cal_1.reset_result()
cal_1.get_info()

cal_1.sum(1)
cal_1.mul(100)
cal_1.get_info()

cal_2 = newCal()
cal_2.sum(5000)
cal_2.get_info()

print("--------------------")

cal_1.otherNum(cal_2)

cal_1.get_info()

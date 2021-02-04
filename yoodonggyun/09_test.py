class Consumer():
    def __init__(self,name,age, gender): # 이름, 나이, 성별 넣기
        self.money = 1000
        self.health = 100
        self.work = ""
        self.name = str(name)
        self.age = age
        self.gender = str(gender)
    
    def work(self,a): # 하는 일
        self.work = str(a)
        print("your job just saved : %s " %(self.work))
        return
    
    def rename(self,nameT): # 이름 개명
        self.name = nameT
        print("you name just renamed : %s" %(self.name))

         
if __name__ == "__main__": # 시작
    
    pA = Consumer("hoho",12,"male")
    pA.rename("hihi")
    
    







        
        



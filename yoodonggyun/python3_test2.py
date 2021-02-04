from functools import reduce

class calc:
    
    def sum(self,a,b):
        return a+b
        
    def sum_all(self,*all):
        temp = 0
        for  i in range(len(all)):
            temp += all[i]
        
        print(temp)
        

    def mul(self,a,b):
        print(a*b)
    


calc_1 = calc()
calc_1.sum(3,5)
calc_1.mul(2,3)
print(calc_1.sum(1,5))
list_1 = [500,100,20,50]

calc_1.sum_all(1,2,3,4,5,100,200,1000,200)

print(reduce(calc_1.sum,list_1))




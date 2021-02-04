num = 10
string  = 'a'

list_1 = []
list_2 = [1,2,3,4,5]
list_3 = ["a","b","c","d"]
dict_1 = {}
dict_2 = {1:"apple",2:"banana"}
dict_4 = [[1,2,3,4,5],[20,30,40,50], ["abc",'d',"e"]]
tuple_1 = ()
tuple_2 = (1,2,3,4,5)
tupe_3 = ("a","b","c")
tuple_4 = ((1,2,3,4),("a","b","c"))
set_1 = {12,4,15,2}
set_2 = {1}

def sum(a,b):
    return a+b

print(sum(10,20))

func_1 = sum
func_1(10,30)

def sum_data_a(a):
    result = func_1(a, 20)
    print(result)
    return result


sum_data_a(100)
sum_data_a(200)


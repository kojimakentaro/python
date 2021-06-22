#coding:utf-8
#python sample.py


"""def hello(name):

    message = "{0}さん、こんにちは".format(name)
    print(message)

hello("kojima")



def check_name(name):
    if len(name) >=3:
        return True
    else:
        return False


name = input()
result = check_name(name)
if result:
    print("登録完了")
else:
    print("名前が短いです")



def hello(*args):
    print(args)

def hello(text , * , name = "kojima"):
    print(text,name)

hello("こんにちは")
hello("こんにちは",name = "kentaro")


def create_int_list(numbers = None):
    if numbers is None:
        numbers = []

    for i in range(10):
        numbers.append(i)
    return numbers

numbers = create_int_list()
print(numbers)

numbers1 = create_int_list()
print(numbers1)

numbers2 = create_int_list()
print(numbers2)

"""

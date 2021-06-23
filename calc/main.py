"""import calc 

result = calc.add(1,2)
print(result)


from calc import add

result = add.execute(1,3)
print(result)

"""
try:
    file = open("hello.txt","x",encoding="utf-8")
except FileExistsError:
    print("ファイルが既に存在します")
else:
    file.write("hello")
finally:
    file.close()





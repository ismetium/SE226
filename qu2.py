second = int(input("Enter the Second : "))
hours = second // 3600
temp = second % 3600
min = temp //60
second = temp %60
print(hours , " hours" , min , " min" , " second" , second)
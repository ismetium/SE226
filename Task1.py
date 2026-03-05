x = int(input("Please enter a positive integer greater than 1 : "))
steps = 0
while x != 1:
    if x % 2 == 0:
        x = x // 2
    else:
        x = 3 * x + 1
    steps += 1
    print("-->",x,end=" ")
print()
print("Total steps:" , steps)
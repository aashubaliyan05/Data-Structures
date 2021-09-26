number = int(input("Enter a number : "))
sumEven = 0
sumOdd = 0
for i in range(1,number+1,1):
    if(i % 2 == 0):
        sumEven += i
    else:
        sumOdd += i
print("Sum Even is : ", sumEven)
print("Sum odd is : ", sumOdd)
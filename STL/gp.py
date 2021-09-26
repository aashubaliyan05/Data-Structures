import math
a = int(input("Enter 1st term (a) of GP : "))
r = int(input("Enter common difference (r) of GP : "))
n = int(input("Enter no of terms (n) in GP : "))

sumGP = 0

if(r !=1 ):
    sumGP = a*(math.pow(r,n)-1)/(r-1)
elif(r > -1 and r < 1):
    sumGP = a*(r-1)
elif(r == 1):
    sumGP = "infinte"

print("Sum of GP is : ", sumGP )


n=int(input("enter any positive number:"))
e=int(input("enter the value of exponent:"))
p=1
for i in range(1,e+1):
    p=p*n
print("the power of",n,"^",e,"is",p)
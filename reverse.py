x=int(input("enter any number to be reversed:"))
rev=0
while x>0:
    rev=(rev*10)+(x%10)
    x=x//10
print("reverse is",rev)


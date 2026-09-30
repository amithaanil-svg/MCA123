y=int(input("Enter the final year:"))
print("Future leap years from 2021:")
for x in range (2021,y+1):
    if((x%4==0) and (x%100!=0)) or (x%400==0):
        print(x)
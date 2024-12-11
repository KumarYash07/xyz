n=int(input("Enter number= "))
reverse=0
temp=n
while(n>0):
    digit=n%10
    reverse =reverse*10 + digit
    n=n//10
if(reverse==temp):
    print(f"{reverse} is pallindrome")
else:    
    print(f"{reverse} is not pallindrome")
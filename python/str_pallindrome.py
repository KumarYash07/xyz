# s='ABCDEFGHI'
# print(s[2:7])
# print(s[-7:-2])
# print(s[2:-5])

St=print("Enter string= ")
lenght=len(St)
temp=St
reverse=''
while(lenght > 0):
    i=St%10
    reverse=i
    St=St//10
if(reverse==temp):
    print(f"{reverse} is pallindrome")
else:    
    print(f"{reverse} is not pallindrome")
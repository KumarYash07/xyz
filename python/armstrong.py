n=int(input("Enter num"))
sum=0
order=len(str(n))
temp=n
while(n>0):
    digit=n%10
    sum +=digit **order
    n=n//10
if(sum==temp):
    print(f"{temp} is an Armstrong num")
else:
    print(f"{temp} is not an Armstrong num")   

# def is_armstrong(number):
#     digits=str(number)
#     power=len(digits)
#     armstrong_sum= sum(int(digit)**power for digit in digits)
#     return armstrong_sum==number
# num=int(input("Enter number="))
# if is_armstrong(num):
#     print(f"{num} is armstrong")
# else:
#     print(f"{num} is not armstrong")
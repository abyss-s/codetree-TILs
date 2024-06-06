str=input().split(" ")
a=int(str[0])
b=int(str[1])
if(a<b):
    print("1 0")
elif(a==b):
    print("0 1")
else: 
    print("0 0")
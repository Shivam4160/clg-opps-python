#pythhhoooon Errors and Exceptions


x=6

try:
    print(x)

except:
    print("An Exception accuued")



print("\n\n\n\n")



try:
    a=int(input("first numbers"))
    b=int(input("second numbers"))
    result=a/b
    print("result=",result)

except:
    print("An Exception accuued")


print("\n\n\n\n")



i=10


if(i>15):
    print("i is less than 15")

print("I am not inside of if")

print("\n\n\n\n")


a=20

if(a<15):
    print("a is smaller than 15")
    print("i am in if")
else:
    print("a is greater than 15")
    print("i am in else")

print("i am outside if statement")





print("\n\n\n\n")

#nested if statement

num = 0

if(num>0):

    if(num%2==0):
        print("number is positive and even")
    else:
        print("number is positive and odd")

elif(num==0):
    print("number is 0")
    print("Zero is neither Positive nor Negative but it is even number")

else:
    if(num%2==0):
        print("number is negative and even")
    else:
        print("number is negative and odd")

    
print("\n\n\n\n")





b=10
if b<15:print("b is less than 15")




print("true")if b<15 else print("false")


print("\n\n\n\n")

#for loop


for i in range (0,10):
    print("Good morning",i)

print("\n\n\n\n")


#while loop

num1=1

while(num1<=10):
    if(num1%2==0):
        print(num1)
    num1+=1
print("\n\n\n\n")


fruits =["apple","half-apple","khadhelu-apple","apple-juice","mummy-apple","papa-apple","brother-apple","sister-apple"]

for x in fruits:
    print(x)


print("\n\n\n\n")



for row in range(2):
    for col in range(3):
        print("1", end=" ")
    print("\n")




print("\n\n\n\n")


list  = [{"course":"DBMS","price":10000},
         {"course":"Python","price":25000},
         {"course":"Java","price":25000}]


for dict in list:
    for key, value in dict.items():
        print(key,":",value)
    print(" ")


print("\n\n\n\n")



Course=[dictionary["course"] for dictionary in list]
Price=[dictionary["price"] for dictionary in list]


print(Course)
print(Price)




print("\n\n\n\n")

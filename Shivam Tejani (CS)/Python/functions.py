from functools import reduce

# genarate function

def genarate_number():
    for i in range(1,6):
        yield i
for num in genarate_number():
    print(num , end=" ")


# lembda function

double = lambda x : x * 2
print("\n\n\n",double(5))


# lambda function to find sum of square of two numbers

z = lambda x , y : x * x + y * y
print("\n\n\n",z(10,20))


#find square of each number from number list using

def square(x):
    return x * x
squarelist = map(square , [1,2,3,4,5])

for i in squarelist:
    print(i, end=" , ")

# lambda function to find length of string

playername = ["sachin" , "dsp-siraj" , "ravindra-jadeja"]
plength = map(lambda string:len(string),playername)

print("\n\n\n")

for i in plength:
    print(i, end=" , ")


#filter function
# lambda function to find player names whose name length is  6

playername = ["sachin" , "dsp-siraj" , "ravindra-jadeja"]
result = filter(lambda string:len(string)==6,playername)

print("\n\n\n")

for i in result:
    print(i)

# reduce function

numlist = [12 , 22 , 10 , 32 , 52 , 32 ]

sum = reduce(lambda x , y : x + y, numlist)

print("\n\n\n")
 
print(sum)








#sliceing

print("\n\n")
string = "this is a string"
print(string[3])

print(string[10: ])



#1st  split

statement= "this is ,a statement"
part = statement.split(',')
print(part)
print("\n")

#2nd  partition 

file= "example.txt"
print(file)
name, _, extention = file.partition(".")
print(name)
print(extention)
print("\n")

#3rd  strip

username= "123  BRO   456"
user = username.strip()
print(user)
print("\n")

#4th   list
my_list = [1,2,3 , "hello" , "BRO"]

    #append , extend & insert
my_list.append(26)
print(my_list)
print("\n")


my_list.extend([10,20,30])
print(my_list)
print("\n")


my_list.insert(0,0)
print(my_list)
print("\n")

#delete ,remove ,clear & pop
del my_list[0]
print(my_list)
print("\n")

print(my_list.pop(0))
print("\n")

my_list.remove(30)
print(my_list)
print("\n")

my_list.clear()
print(my_list)


# index , count 
my_list = [1,2,3 , "hello" , "BRO"]

print(my_list.count("BRO"))
print("\n")

print(my_list.index('hello'))
print("\n")


#5th  types of list and some operations on it
# set= {}    tuple = ()   list= []

tuple = (18,45, 64,77,95)
list =["virat", "rohit" , "yashasvi", "shubhman", "jasprit"]
set= { "kohli", "sharma", "jaiswal", "gill", "bumrah"}

list.insert(0, tuple)
list.insert(6,set)
print(list)















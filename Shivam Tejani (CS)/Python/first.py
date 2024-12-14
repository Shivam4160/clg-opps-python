
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

username= "           sahil            "
user = username.strip()
print(user)
print("\n")

#4th   list
my_list = [1,2,3 , "hello" , "sahil"]

    #append , extend & insert
my_list.append(18)
print(my_list)
print("\n")


my_list.extend([50,60,70])
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

my_list.remove(50)
print(my_list)
print("\n")

my_list.clear()
print(my_list)


# index , count 
my_list = [1,2,3 , "hello" , "sahil"]

print(my_list.count("sahil"))
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



#5th stings

#sliceing

print("\n\n")
string = "this is a string"
print(string[3])

print(string[10: ])















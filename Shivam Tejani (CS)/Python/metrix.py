#slicing of an array
import array as arr
l=[1,2,3,4,5,6,7,8,9,10]
a=arr.array('i',l)
print("inital array:")
for i in(a):
    print(i,end="")
    
sliced_array=a[3:8]
print("\n slicing element in a range 3-8:")
print(sliced_array)
sliced_array=a[5:]
print("\n Element sliced from 5th"
          "element till the end:")
print(sliced_array)
sliced_array=a[:]
print("\n printing all element using slice operation:")
print(sliced_array)


#searching element in a array

import array
arr=array.array('i',[1,2,3,1,2,5])
print("the new created array is :",end="")
for i in range(0,6):
    print(arr[i],end="")
print("\n")
print("the index of 1st accurrence of 2 is :",end="")
print(arr.index(2))
print("the index of 1st occurrense of 1 is : ",end="")
print(arr.index(1))


# Removing Elements from the Array
import  array
arr = array.array('i',[1,2,3,1,5])
print("The new created array is :", end=" ")
for i in range (0,5):
    print (arr[i],end=" ")
print("\n")
print("The popped element is:",end=" ")
print(arr.pop(2))
print("The array after popping is :",end=" ")
for i in range (0,4):
    print(arr[i],end=" ")
print("\n")
arr.remove(1)
print ("The array after removing is :",end="")
for i in range(0,3):
     print(arr[i],end="")   


#updating element in a array

import array
my_array=array.array('i',[1,2,3,4,2,5,2])
count=my_array.count(2)
print("Number of occurrence of 2:",count)


#reverse element in a array

c=[1,2,3,4,5,6,7,9]
print(c)
c.reverse()
print(c)


#creating a matrix

x=[[1,2,3],[4,5,6],[7,8,9]]
print("matrix=",x)


#user input matrix

Row=int(input("Enter the number of rows:"))
Column=int(input("Enter the number of column:"))
matrix=[]
print("Enter the entries row wise:")
for row in range(Row):
    a=[]
    for column in range(Column):
        a.append(int(input()))
    matrix.append(a)
for row in range(Row):
    for column in range(Column):
        print(matrix[row][column],end="")
    print()
     


#create matrix using list compernension

x=[[1,2,3],[4,5,6],[7,8,9]]
matrix=[[column for column in range(4)] for row in range(4)]
print(matrix)




#assingning value in a matrix

x=[[1,2,3],[4,5,6],[7,8,9]]
row=column=1
x[row][column]=11
print(x)


#transpose metrix

x=[[9,8,7],[6,5,4],[3,2,1]]
result=[[0,0,0],[0,0,0],[0,0,0]]
for row in range(len(x)):
    for column in range(len(x[0])):
        result[column][row]=x[row][column]
for r in result:
            print(r)


#add two matries using nested loop

x=[[1,2,3],[4,5,6],[7,8,9]]
y=[[9,8,7],[6,5,4],[3,2,1]]
result=[[0,0,0],[0,0,0],[0,0,0]]
for row in range(len(x)):
    for column in range(len(x[0])):
        result[row][column]=x[row][column]+y[row][column]
for r in result:
            print(r)

    

#!/usr/bin/python
# Simple calculator


# operations

def add(a, b):
	return a+b

def subtract(a,b):
	return a-b

def multiply(a,b):
	return a*b

def divide(a,b):
	if b==0:
		print "Can't divide to 0"
	else: 
		return a/b

# main program

print "Select the operation:"
print "1) add"
print "2) subtract"
print "3) multiply"
print "4) divide"

option = input("Enter one of these operations (1,2,3,4) ")

num1 = input("The first number : ")
num2 = input("The second number : ")

print "======================================================="
# print result

if option==1:
	print "Result : ", add(num1, num2)	
elif option==2:
	print "Result : ", subtract(num1, num2)
elif option==3:
	print "Result : ", multiply(num1, num2)
elif option==4:
	print "Result : ", divide(num1, num2)
else:
	print "No option selected"
	


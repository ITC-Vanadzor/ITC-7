#!/usr/bin/python
import sys

#define functions 
def Sum(a,b):
	 print   a+b

def Sub(a,b):
	print   a-b

def Mult(a,b):
	print  a*b

def Div(a,b):
	try:
		print float(a)/b
	except ArithmeticError:
		print "Can't divide to 0"

# entering  the numbers for doing arithmetic operation
x=input("Enter the  first number \t")
y=input("Enter the second number \t")
# making case  for doing operation
options={0 : Sum, 1 : Sub, 2 : Mult, 3 : Div, }		
# entering the choice for operation
choice=input("Enter the choice of arithmetic operation.\n0 for sum \n1 for sub, \n2 for mult,\n3 for  div \t")
# calling function
options[choice](x,y)





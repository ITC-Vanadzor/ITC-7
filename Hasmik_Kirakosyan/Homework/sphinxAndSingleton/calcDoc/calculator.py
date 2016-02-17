#!/usr/bin/python

import argparse
# Simple calculator

# operations
def add(a, b):
	"""
	:param name: a, b
	:param type: int  
   	:param value: user input value
   	:returns: int
	"""
	return a+b

def subtract(a,b):
	"""
	:param name: a, b
	:param type: int  
   	:param value: user input value
   	:returns: int
	"""
	return a-b

def multiply(a,b):
	"""
	:param name: a, b
	:param type: int  
   	:param value: user input value
   	:returns: int
	"""
	return a*b

def divide(a,b):
	"""
	:param name: a, b
	:param type: int  
   	:param value: user input value
   	:returns: float
	"""

	try:
		return a/b
	except ZeroDivisionError as err:
		print ("ZeroDivision error: {0}".format(err))	

# main program

##parser = argparse.ArgumentParser()
##parser.add_argument("--opt", help = "The sum of two numbers", choices=['+', '-', '*', '/'])
##parser.add_argument("--num1", help = "The first number as argument", type = int)
##parser.add_argument("--num2", help = "The second number as argument", type = int)
##args=parser.parse_args()
##try:
##	if args.opt is None:
##		opt = input("Enter the option from this list [ +, -, *, / ]")
##	else:
##		opt = args.opt
##		
##	if args.num1 is  None:
##		num1 = int(input("Enter the first number:"))
##	else:
##		num1 = int(args.num1)
##
##	if args.num2 is  None:
##		num2 = int(input("Enter the second number :"))	
##	else:
##		num2 = int(args.num2)
##
##except (ValueError, TypeError) :
##	print "Wrong input data"
##else:
##	print "======================================================="
##	# print result
##	list = {
##			"+": add(num1, num2),
##			"-": subtract(num1, num2),
##			"*": multiply(num1, num2),
##			"/": divide(num1, num2)
##		}
##	print num1, opt, num2, "= ", list[opt]

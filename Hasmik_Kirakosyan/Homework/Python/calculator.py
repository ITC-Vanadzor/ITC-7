#!/usr/bin/python

import argparse
import sys
# Simple calculator

# operations
def add(a, b):
	return a+b

def subtract(a,b):
	return a-b

def multiply(a,b):
	return a*b

def divide(a,b):
	try:
		return a/b
	except ZeroDivisionError as err:
		print ("ZeroDivision error: {0}".format(err))	

# main program

parser = argparse.ArgumentParser()
parser.add_argument("--opt", help = "The sum of two numbers", choices=['+', '-', '*', '/'])
parser.add_argument("-n1", help = "The first number as argument", type = int)
parser.add_argument("-n2", help = "The second number as argument", type = int)
args=parser.parse_args()
try:
		
	if args.n1 is  None:
		num1 = int(input("Enter the first number:"))
	else:
		num1 = int(args.n1)

	if args.n2 is  None:
		num2 = int(input("Enter the second number :"))	
	else:
		num2 = int(args.n2)

except (ValueError, TypeError) :
	print "Wrong input data"
else:
	print "======================================================="
	# print result
	list = {
			"+": add(num1, num2),
			"-": subtract(num1, num2),
			"*": multiply(num1, num2),
			"/": divide(num1, num2)
		}
	print args.n1, args.opt, args.n2, "= ", list[args.opt]

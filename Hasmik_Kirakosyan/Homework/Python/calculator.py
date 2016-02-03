#!/usr/bin/python

# Simple calculator

# operations
import sys
def add(a, b):
	return a+b

def subtract(a,b):
	return a-b

def multiply(a,b):
	return a*b

def divide(a,b):
	try:
		c = a/b
	except ZeroDivisionError:
		print "ERROR! Can't divide to 0"
	else: 
		return c

# main program
try:
	num1 = int(sys.argv[1])
	num2 = int(sys.argv[3])
except ValueError:
	print "Wrong input datas"
else:
	print "======================================================="
	# print result
	option = {
		"+": add(num1, num2),
		"-": subtract(num1, num2),
		"*": multiply(num1, num2),
		"/": divide(num1, num2)
		}
	
	print option[sys.argv[2]]

#!/usr/bin/python
import sys

def add(a, b):
	return a + b;

def sub(a , b):
	return a - b;

def multiply(a , b):
	return a * b;

def divide(a, b):
	try:
       	    a / b;
    	except ZeroDivisionError:
            print"You cant divide to 0";
	else: 
		return a / b;

a = int(sys.argv[1])
b = int(sys.argv[2])

choise = {
	"+": add(a, b),
	"-": sub(a, b),
	"*": multiply(a, b),
	"/": divide(a, b)
	}
	
print choise[sys.argv[2]]

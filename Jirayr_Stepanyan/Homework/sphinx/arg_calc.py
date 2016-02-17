#!/usr/bin/python
import sys, argparse

def add(a, b):
   """   
   :param name: a
   :param type: float
   :param name: b
   :param type: float
   :returns: float
   """
   return a + b;

def sub(a , b): 
   """
   sub function
   :param name: a, b
   :param type: float
   :returns: float
   """
   return a - b;

def multiply(a , b): 
   """
   multyply function
   :param name: a, b
   :param type: float
   :returns: float
   """
   return a * b;

def divide(a, b): 
   """
   divide function
   :param name: a, b
   :param type: float
   :returns: float
   """
   if b == 0:
   	print"You cant divide to 0";
   else: 
	return a / b;

parser = argparse.ArgumentParser(description="calculate");
parser.add_argument('--n1', type=float, dest='num1');
parser.add_argument('--n2', type=float, dest='num2');
parser.add_argument('--operation', dest='option', choices=['+','-','*','/']);
args = parser.parse_args();

if args.num1==None:
	a = input("please input number 1: ");
else:
	a = args.num1;
if args.num2==None:
    b = input("please input number 2: ");
else:
    b = args.num2;
if args.option==None:
    optionn = input("please input operation: ");
else:
    optionn = args.option;
choise = {
	    "+": add(a, b),
	    "-": sub(a, b),
	    "*": multiply(a, b),
	    "/": divide(a, b)
	 }
print choise[optionn];

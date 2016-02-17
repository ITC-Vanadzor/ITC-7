#!/usr/bin/python
import argparse
import sys

#define functions 
def Sum(a,b):
	 """parameters using
			     :param a: first number as parameter
                             :param b: second number as parameter
	    type of the parameters
			    :type int: none 
	    returns using
			    :returns: none
	 """	
	 print   a+b
def Sub(a,b):
	"""parameters using
			     :param a: first number as parameter
                             :param b: second number as parameter
	    type of the parameters
			    :type int: none 
	    returns using
			    :returns: none
	 """	
	
	print   a-b

def Mult(a,b):
	 """parameters using
			     :param a: first number as parameter
                             :param b: second number as parameter
	    type of the parameters
			    :type int: none 
	    returns using
			    :returns: none
	 """		
	 print  a*b

def Div(a,b):
	 """parameters using
			     :param a: first number as parameter
                             :param b: second number as parameter
	    type of the parameters
			    :type int: none 
	    returns using
			    :returns: none
	 """	
	
#	try:
#		print float(a)/b
#	except ArithmeticError:
#		print "Can't divide to 0"


# ## creates an object parser from argparse 
#            parser = argparse.ArgumentParser()
# 
# ## adding 3 arguments `2 for numbers and 1 for operation
# 
#            parser.add_argument("--operation", type=str, choices=['+','-','*','/'], help='Input the operation +,-,/,*i', )
# 
#            parser.add_argument("--N1", type=int, help="Enter number N1",action="store")
# 
#            parser.add_argument("--N2", type=int, help="Enter number N2",action="store")
# 
# ## crates an variable, which will contain argument list  of parse
#            args=parser.parse_args()
# 
#            if args.N1 == None:
#        	    # entering  the numbers for doing arithmetic operation
#        	    x=int(input("Enter the  first number \t"))
#            else:
#        	    x=args.N1
#            if args.N2 == None:
#        	    y=int(input("Enter the second number \t"))
#            else:
#        	    y=args.N2
# 
#            if args.operation:
#        	    options={'+':Sum, '-':Sub, '/':Div, '*':Mult}
#        	    choice=args.operation
# 	options[args.operation](x,y)
#            else:
#        	    options={0 : Sum, 1 : Sub, 2 : Mult, 3 : Div, }		
#        	    choice=input("Enter the choice of arithmetic operation.\n0 for sum \n1 for sub, \n2 for mult,\n3 for  div \t")
#  ##calling function
# 	    options[choice](x,y)
# 	    return

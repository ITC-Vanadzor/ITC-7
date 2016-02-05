#!/usr/bin/python
import argparse
#######
## INCORRECT!!  
######

parser = argparse.ArgumentParser(description = 'My calculator')
parser.add_argument('--n1', dest='number1', type=int, nargs='?', default=input("Input first number: n1 = "), help='first number')
parser.add_argument('--op', dest='operation', choices=['+', '-', '/', '*'], nargs = '?', default=input('Input operation: '), help='operation')
parser.add_argument('--n2', dest='number22', type=int, nargs='?', default=input('Input second number: n2 = '), help='second number')
args=parser.parse_args()

try:
    operations = {
	'+': args.number1+args.number2,
	'-': args.number1-args.number2,
	'*': args.number1*args.number2,
	'/': args.number1/args.number2
    }
    result=operations[args.operation]
except ZeroDivisionError:
    print "Devision by NULL! Try again."
else:
    print result


#!/usr/bin/python
import argparse

try
    parser = argparse.ArgumentParser(description = 'My calculator')
    parser.add_argument('--n1', dest='number1', type=int, help='first number')
    parser.add_argument('--op', dest='operation', choices=['+', '-', '/', '*'], help='operation')
    parser.add_argument('--n2', dest='number2', type=int, help='second number')
    args=parser.parse_args()

    if args.number1 == None:
	num1 = int(input("Input first number: n1=  "))
    else:
	num1 = args.number1

    if args.operation == None:
	op = str(input("Choise your operation: "))
    else:
	op = args.operation

    if args.number2 == None:
	num2 = int(input("Input second number: n2=  "))
    else: 
	num2 = args.number2

    if not op in '/':
	operations = {
	    '+': num1 + num2,
	    '-': num1 - num2,
	    '*': num1 * num2
	}
	print operations[op]
    else:
	if num2 == 0:
	    raise ZeroDivisionError
	else:
	    print (num1 / num2)

except ZeroDivisionError:
    print "Devision by NULL! Try again."
except ValueError:
    print "Incorrect number! Try again"
except KeyError:
    print "Incorrect Operation! Try again"

#!/usr/bin/python
import sys

## Please enter the expression (example: 5 + 8)

num1 = sys.argv[1]
sym = sys.argv[2]
num2 = sys.argv[3]
if sym != '/' :
    operations = {
	'+': int(num1) + int(num2),
	'-': int(num1) - int(num2),
	'*': int(num1) * int(num2)
    }
    print operations[sym]
else :
    if float(num2) != 0:
	print float(num1) / float(num2)
    else: 
	print "Divisiom by NULL. Try again"

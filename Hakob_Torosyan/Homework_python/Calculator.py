#!/usr/bin/python
import sys

a=sys.argv[1]
b=sys.argv[3]
operator=sys.argv[2]

if operator == '+':
	sum = float(a) + float(b)
	print(sum)
elif operator == '-':
	sum = float(a) - float(b)
	print(sum)
elif operator == '*':
	sum = float(a) * float(b)
	print(sum)
elif operator == '/':
	if b != '0':
		sum = float(a) / float(b)
		print(sum)
	else:
		print("b can not be 0, import right number") 






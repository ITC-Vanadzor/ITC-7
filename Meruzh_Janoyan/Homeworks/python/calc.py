#!/usr/bin/python
import sys

first=float(sys.argv[1])
second=float(sys.argv[3])
operator=sys.argv[2]

result=0
if operator=='+':
	result=first+second
elif operator=='-':
	result=first-second
elif operator=='x':
	result=first*second
elif operator=='/':
	result=first/second

print first,operator,second," = ",result

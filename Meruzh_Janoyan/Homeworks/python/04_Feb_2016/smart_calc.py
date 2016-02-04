#!/usr/bin/python
import sys
import argparse

ps=argparse.ArgumentParser(description="Very Smart Calculator v.1.0.0 :) ")
ps.add_argument('--option',dest='opt',choices=['+','-','/','x'],help='what do you want do ?')
ps.add_argument('--num1',dest='first',type=float, help='first number')
ps.add_argument('--num2',dest='second',type=float, help='second number')
args=ps.parse_args()

if args.opt is None:
	print 'What do you want do ? Please input option [+,-,x,/]:  ',
        my_opt=raw_input()#sys.stdin.read(1)
else:
	my_opt=args.opt
if args.first is None:
	my_first=float(raw_input('Please input first number: '))
else:
	my_first=args.first

if args.second is None:
	my_second=float(raw_input('Please input second number: '))
else:
	my_second=args.second

if my_opt=='/' and my_second==0:
	print 'Division by ZERO'
	exit(-1)
options={
	'+': my_first + my_second,
	'-': my_first - my_second,
	'x': my_first * my_second,
	'/': my_first / my_second
}
print my_first , my_opt , my_second, " = ",options[my_opt]





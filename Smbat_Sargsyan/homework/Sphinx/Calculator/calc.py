import argparse
   
parser=argparse.ArgumentParser(description="Calculator")
parser.add_argument('--n1',dest='number1',type=float,help='Please,enter first number')
parser.add_argument('--n2',dest='number2',type=float,help='Please, enter second number')
parser.add_argument('--option',dest='option',choices=['+','-','*','/'],help='Please enter the simbol of the option,what you need?')
args=parser.parse_args()
def sum(m,n):
   	"""
	:param name: m,n
   	:param type: int  
   	:param value: user input value
  	:returns: float
  	"""
	return m+n
def hanum(m,n):
	return m-n
def bajanum(m,n):
	if n==0:
		print("ERROR,try again")
	else :
		return m/n
def bazmapatkum(m,n):
	return m*n
class IncorectNumber(Exception):
	"""
	MY exception
	"""
	def __init__(self,number):
		self.number=number
class BrokenOption(Exception):
	def __init__(self,option):
		self.option=option
def DefaultCalculator():
        """
	Runing default calculator
	"""

	numb1=float(input('Enter number1: '))
       	numb2=float(input('Enter number2: '))
        opt=float(input("1)Gumarum" "2)Hanum" "3)Bajanum" "4)Bazmapatkum  ",))
        if opt == 1:
       	        print sum(numb1,numb2)
	elif opt == 2:
                print hanum(numb1,numb2)
	elif opt == 3:
       	        print bajanum(numb1,numb2)
        elif opt == 4:
                print bazmapatkum(numb1,numb2)
	elif opt > 4 or opt <=0:
	 exit(0)
if args.option == None or args.number1 == None or args.number2 == None:
	print("Working default calculator without command line arguments")
	DefaultCalculator()
if args.option == '/' and args.number2 == 0:
	print("ERRor!!")
if not args.option is '+' or not args.option is '-' or not args.option is '/' or not args.option is '*':
options={
	'+': sum(args.number1,args.number2),
	'-': hanum(args.number1,args.number2),
	'*': bazmapatkum(args.number1,args.number2),
	'/': bajanum(args.number1,args.number2)
}
print options[args.option]

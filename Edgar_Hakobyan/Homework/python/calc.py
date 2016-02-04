import argparse
def Sum(x,y):
    return x+y
def Subtract(x,y):
    return x-y
def Multiply(x,y):
    return x*y
def Divide(x,y):
    if y == 0:
        print "chi kareli bajanel 0-i vra"
    else:
        return (float)(x)/(float)(y)
parser = argparse.ArgumentParser(description='calculator')
parser.add_argument('-n1',type=int,help='arajin argument')
parser.add_argument('-n2',type=int,help='erkrord argument')
parser.add_argument('-opt',choices=['+','-','*','/'],help='operation')
args=parser.parse_args()
options = { '+':Sum, '-':Subtract, '*':Multiply, '/':Divide }
if args.n1 == None:
    a = input("greq arajin tiv@ ")
else:
    a = args.n1
if args.n2 == None:
    b = input("greq erkrord tiv@ ")
else:
    b = args.n2
if args.opt == None:
    op = raw_input("greq gorcoxutyan nshan@ ")
else:
    op = args.opt
print options[op](a,b)


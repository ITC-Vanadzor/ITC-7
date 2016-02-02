def Sum(x,y):
    return (int)(x)+(int)(y)
def Subtract(x,y):
    return (int)(x)-(int)(y)
def Multiply(x,y):
    return (int)(x)*(int)(y)
def Divide(x,y):
    return (float)(x)/(float)(y)
string = raw_input("write expression ")
first = ''
second = ''
k = 0
operation = ''
for i in string:
    if i == '+' or i == '-' or i == '*' or i == '/':
        operation = i
        break
    else:
        first = first + i
        k = k + 1
for j in range(k+1,len(string)):
    second = second + string[j]
if first.isdigit() and second.isdigit() and (operation == '+' or operation == '-' or operation == '*' or operation == '/'):
    options = { '+':Sum, '-':Subtract, '*':Multiply, '/':Divide }
    answer = options[operation](first,second)
    print string,'=',answer
else:
    print "ther are no arithmetical operations"


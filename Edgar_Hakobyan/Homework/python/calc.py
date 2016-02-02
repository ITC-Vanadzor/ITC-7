string = raw_input("write expression ")
a = ''
b = ''
k = 0
operation = ''
for i in range(len(string)):
    if not(string[i] == '+' or string[i] == '-' or string[i] == '*' or string[i] == '/' ):
        a = a + string[i]
        k = k + 1
    else:
        operation = string[i]
        break
for j in range(k+1,len(string)):
    b = b + string[j]
if operation == '+':
    add = (int)(a)+(int)(b)
    print string,"=",add
elif operation == '-':
    subtract = (int)(a)-(int)(b)
    print string,"=",subtract
elif operation == '*':
    multiply = (int)(a)*(int)(b)
    print string,"=",multiply
elif operation == '/':
    divide = (float)(a)/(float)(b)
    print string,"=",divide
else:
    print "ther are no arithmetical operations"

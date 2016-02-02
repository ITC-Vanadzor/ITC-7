#!/usr/bin/python
a = input("a = ");
b = input("b = ");
nshan = -1;
while nshan < 1 or nshan > 4:
    nshan = input("1 (sum)\n2 (sub)\n3 (devide)\n4 (multyply)\n" );
    if nshan < 1 or nshan > 4:
    	print("WRONG NUMBER!!! plesae enter any number between 1 and 4");
if nshan == 1:
    print a, '+', b, '=', a + b;
elif nshan == 2:
    print a, '-', b, '=', a - b;
elif nshan == 3:
    if b == 0:
        print "ERROR!!! You can't devide to 0";
    else:
        print a, '/', b, '=', a / b;
elif nshan == 4:
    print a, '*', b, '=', a * b;

#!/usr/bin/python
i=-1;
while i < 1 or i > 4:
    a,nshan,b=input("a = "),input("1 (sum)\n2 (sub)\n3 (devide)\n4 (times)\n" ),input("b = ");
    if nshan == 1:
       print(a + b);
       break;
    elif nshan == 2:
    	print(a - b);
        break;
    elif nshan == 3:
    	print(a / b);
	break;
    elif nshan == 4:
    	print(a * b);
	break;
    else: 
	print("WRONG NUMBER!!! plesae enter any number between 1 and 4")

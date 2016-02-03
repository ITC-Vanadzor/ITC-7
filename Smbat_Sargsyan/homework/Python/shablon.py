import re
import sys
try:
	file1=open(sys.argv[1],"r+")
	
	f=file1.read()
except IOError:
<<<<<<< HEAD
	print("Not a file")
=======
	print("Cannot open file")
>>>>>>> b4094a6b3c6f156b2c28677e30ed1487b1963424
shablon_re=re.compile(r"Brend: [A-Z]*|\n|Version: [1-9].[0-9].[0-9]*|\n|Made: [A-Z][a-z]*")
if shablon_re.match(f) is None:
    print("ERROR!!!")
else:
	print("It's OK")
file1.close()

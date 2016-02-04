import re
import sys
try:
	file1=open(sys.argv[1],"r")
	f=file1.read()
except IOError:
	print("Not a file")
	print("Cannot open file")
shablon_re=re.compile(r"""
Brend: [A-Z]+|\n
|Version: [1-9][.][0-9][.][0-9]+|\n
|Made: [A-Z][a-z]+
""",re.VERBOSE)
if shablon_re.match(f) is None:
    print("ERROR!!!")
else:
	print("It's OK")
file1.close()

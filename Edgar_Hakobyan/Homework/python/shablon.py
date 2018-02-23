import re
shablon1 = re.compile('Brand: [A-Z]*')
shablon2 = re.compile('Version: [0-9].[0-9]*')
shablon3 = re.compile('Made by: [A-Z][a-z]*')
try:
	file = open("brend.txt","r")
	file1 = []
	file1 = file.readlines()
except IOError:
	print "error!"
else:
	str1 = file1[0]
	str2 = file1[1]
	str3 = file1[2]
if not shablon1.match(str1) is None:
	if not shablon2.match(str2) is None:
		if not shablon3.match(str3) is None:
			print "amen inch chist e arvac"
		else:
			print "Uneq sxal Made by-i mej"
	else:
		print "Uneq sxal Version-i mej"
else:
	print "uneq sxal Brand-i mej"
file.close()

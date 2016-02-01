#!/usr/bin/python

# program clears $,%,#,@,& symbols from a string

def clearSymbols(str):
	newString=""
	list = ['$', '%', '#', '^', '&', '@']
	for symbol in str:
		if symbol not in list:
			newString = newString + symbol		
	return newString

# main program
str="He%$ll%^o ^^g$o&$od m@a#n"
print "Before clean process : ", str
print "After  clean process : ", clearSymbols(str)

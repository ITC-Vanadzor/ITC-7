#!/usr/bin/python
import sys
def CorrectionOfString(string):
	newstring=""
	for i in string:
		if i.isalpha():
			newstring=newstring +i
	return newstring
	



string = "he&%l)lo +wor(l)d"
if string.isalpha():
	print "It's all letters"
else:
	print CorrectionOfString(string)
        

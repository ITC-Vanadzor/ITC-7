#!/usr/bin/python

def CorrectionOfString(str):
	for i in str:
		if i.isalpha():
			print i,
		
	



string = "he&%l)lo +wor(l)d"
if string.isalpha():
	print "It's all letters"
else:
	CorrectionOfString(string)


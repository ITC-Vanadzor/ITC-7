#!/usr/bin/python

# Program check if the file corresponds to the templete
# You need to give program as argument the file path which you want to check

import re
import sys
import templete

try:
	f = open("templeteExample.txt", "r")
	line=f.readlines()
except IOError:
	"The file does not exist!"
else:
	
	#********* Brand Name ****************
	brandName = line[0][7:-1]
	brandExp = "r'([A-Z]+| _ |" "[A-Z]+)'"
	templete.check(brandName, brandExp, "Brand name is wrong") 

	#********* Version *******************
	versionNumb = line[1][9:-1]
	versionExp = "r'[0-9].{2,10}'"
	templete.check(versionNumb, versionExp, "Version number is wrong") 

	#******* Made in **********************
	countryList = ['Armenia', 'USA', 'Germany', 'Russia']
	country = line[2][9:-1]
	countryExp = "'|'.join(countryList)"
	templete.check(country, countryExp, "Country name is wrong") 
	try:
		f.close()
	except IOError:
		print "IOError"
	else: 
		print " "

#!/usr/bin/python

# Program check if the file corresponds to the templete
# You need to give program as argument the file path which you want to check

import re
import sys

try:
	f = open(sys.argv[1], "r")
	line=f.readlines()
except IOError:
	"The file does not exist!"

#********* Brand Name ****************
brandName = line[0][7:-1]
str = "ANHA S"
brandExp = re.compile(r'([A-Z]+| _ |" "[A-Z]+)')
if (brandExp.match(brandName)==None):
	print "Brand name is wrong"
else:
	print "Brand name is OK"

#********* Version *******************
versionNumb = line[1][9:-1]
versionExp = re.compile(r'[0-9].{2,10}')
if (versionExp.match(versionNumb)==None):
	print "Brand version is wrong"
else: 
	print "Version number is OK"


#******* Made in **********************
countryList = ['Armenia', 'USA', 'Germany', 'Russia']
country = line[2][9:-1]
countryExp = re.compile('|'.join(countryList))
if (countryExp.match(country)==None):
	print "Country format is wrong"
else:
	print "Country format is OK"

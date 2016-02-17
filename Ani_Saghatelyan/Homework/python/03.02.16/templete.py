#!/usr/bin/python

import re
import sys 
try:
	f = open(sys.argv[0], "r")
	line=f.readlines()
except FileNotFoundError:
	print "File doesn't exist"

# name of brand with '_' 
brandName = line[0][7:-1]
brandExp = re.compile(r'([A-Z]+_[A-Z]+)')

if (brandExp.match(brandName)==None):
	print "Brand name is wrong"
else:
	print "The brand  name is ok!!!"


# version of brand
versionNumb = line[1][10:-1]
versionExp = re.compile(r'(/d[.])+$')

if (versionExp.match(versionNumb)==None):
	print "Brand version is wrong"
else:
	print "The version is ok"


madeBy=line[2][9:-1]
list=['Armenia','Japan','China','Germany']
madeExp=re.compile(r'|'.join(list))

if (madeExp.match(madeBy)==None):
        print "Brand made country is wrong"
else:
        print "The  made country is ok"
f.close()

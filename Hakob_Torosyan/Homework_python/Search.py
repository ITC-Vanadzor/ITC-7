#!/usr/bin/python
import re
from os import listdir
try:
	f=open("sevagir.txt", "r+")
except IOError:
	print " ERROR "

i=0;
line1=0
line2=0
line3=0
line4=0
for line in f:
    if i==0:
        line1=line
    if i==1:
        line2=line
    if i==2:
        line3=line
    if i==3:
	line4=line
    i+=1
pattern1 = '^Program Name:[\s][A-Z][a-z]{5,}$' 
pattern2 = '^Version:[\s][0-9]{3,}$'
pattern3 = '^Programmer:[\s][A-Z][a-z]{5,}[\s][A-Z][a-z]{5,}yan$'
pattern4 = '^Company:[\s][A-Z]{5,}$' 
if  re.match(pattern1,line1) is not None and  re.match(pattern2,line2) is not None and  re.match(pattern3,line3) is not None and re.match(pattern4,line4) is not None:
	print "We have right template: "
else:
	print "We have not right template: "
 



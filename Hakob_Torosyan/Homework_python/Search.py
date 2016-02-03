#!/usr/bin/python
import re
from os import listdir
f=open("sevagir.txt", "r+")
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
    if i==3
	line4=line
    i+=1
pattern1 = '^Program Name: '
pattern11 = '[A-Z] [a-z]*+ $' 
pattern2 = '^Version: '
pattern22 = ' [\d\.]+ $'
pattern3 = '^Programmer: '
pattern33 = '[A-Z] [a-z]* | | [A-Z] [a-z]*yan $'
pattern4 = '^Company: '
pattern44 = '[A-Z]* $' 
if re.search(pattern11,line1) is not None, re.match(pattern1,line1) is not None, re.search(pattern22,line2) is not None, re.match(pattern2,line2) is not None, re.search(pattern33,line3) is not None, re.match(pattern3,line3) is not None, re.search(pattern44,line4) is not None, re.match(pattern4,line4) is not None :
print "We have right template: "
 

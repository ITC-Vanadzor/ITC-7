#!/usr/bin/python
import re

f=open("brend.txt", "r+")
a=f.read()
re.compile("Brand: [A-Z]_[A-Z]")
if not re.match("Brand: [A-Z]_[A-Z]{*}", a) is 'None' :
    print "ok"
else:
    print "no

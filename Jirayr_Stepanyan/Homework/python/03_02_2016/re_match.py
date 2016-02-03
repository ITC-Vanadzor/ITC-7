#!/usr/bin/python
import re
from os import listdir
f=open("brend2.txt", "r+");
a=f.read();
i=0;
if not re.match("Brand: [A-Z][A-Z]*|\n|Version: [0-9].[0-9]*|\n|Made by: [A-Z][a-z]*", a) is None:
    print "ok";
else:
    print "no";

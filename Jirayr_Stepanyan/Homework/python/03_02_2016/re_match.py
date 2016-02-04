#!/usr/bin/python
import re
import sys

try:
    f = open(sys.argv[1], "r");
    a = f.read();
except IOError:
    print("ERROR!!! there are not ", sys.argv[1], " file");
else:
    if not re.match("Brand: [A-Z][A-Z]*|\n|Version: [0-9][\.][0-9]*|\n|Made by: [A-Z][a-z]*", a) is None:
        print("ok");
    else:
        print("no");

	f.close();

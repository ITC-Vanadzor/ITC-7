#!/usr/bin/python

import sys
import re

try:
	fd=open(sys.argv[1],"r")
	file_str=fd.read()
	fd.close()
except IOError:
	print "Sorry, but I can't open this file >>",sys.argv[1]
	exit(-1)
else:

	tpl=re.compile(r"FSname: [A-Z][A-Z][A-Z]|\n|Release: [0-3].[0-9].[0-9]|\n|Made: [A-z]*")


if tpl.match(file_str) is None:
	print "Bad File System!"
else:
	print "Good File System!"


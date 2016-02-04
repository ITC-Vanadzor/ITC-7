#!/usr/bin/python

# Templete checker modul
import re

def check(line, exp, message):
	if (re.match(exp, line)):
		print "OK"
	else:
		print message

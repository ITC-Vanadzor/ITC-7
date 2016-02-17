#!/usr/bin/python

# Templete checker modul
import re

def check(line, exp, message):
	if (re.match(exp, line)):
		return "OK"
	else:
		return message

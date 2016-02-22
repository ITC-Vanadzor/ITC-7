#!/usr/bin/python

# Templete checker modul
import re


def check(line, exp, message):
	'''
	This method check brand information templete
	   :param line: line to check. It can be brand name version or made in country
 	   :param exp: regular expression that will match with line
 	   :param message: error message for each part
           :type line: str
 	   :type exp: str
 	   :type message: str
 	   :return: return string according to the results "OK" or Error message
 	   :rtype: str
	   :any: https://www.youtube.com/watch?v=ndPEQqqURXU	
	''' 
	if (re.match(exp, line)):
		return "OK"
	else:
		return message

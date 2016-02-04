#!/usr/bin/python
import unittest
import re
import sortFileModul
import sys, os

class TestStringMethods(unittest.TestCase):
	
	def test_sortFiles(self):
		try:
			os.remove("outputFile")
			sortFileModul.fileCheck('NameSurname1.txt')
			out = open("outputFile", "r")
		except IOError:
			print "File doesnt exist"
		else: 
			for line in out:
				self.assertTrue(re.match('[A-Z][a-z]+ [A-Z][a-z]+', line)) 

if __name__=='__main__':
	unittest.main()	

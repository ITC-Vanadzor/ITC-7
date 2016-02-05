#!/usr/bin/python
import unittest
import re
import sortFileModul
import os.path

class TestStringMethods(unittest.TestCase):
	
	def test_sortFiles(self):
		try:
			if (os.path.isfile("outputFile")):
				os.remove("outputFile")
			sortFileModul.fileCheck('NameSurname1.txt')
			out = open("outputFile", "r")
		except IOError:
			print "File doesnt exist"
		else: 
			for line in out:
				self.assertRegexpMatches(line,'[A-Z][a-z] [A-Z][a-z]$', msg=None) 
			out.close()

if __name__=='__main__':
	unittest.main()	

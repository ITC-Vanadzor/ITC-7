#!/usr/bin/python
import unittest
import re
import sortFileModul
import os.path

class TestSortFilesNames(unittest.TestCase):
	def setUp(self):
		try:
			if (os.path.isfile("outputFile")):
				os.remove("outputFile")	
		except IOError:
			print "File doesnt exist"

	def __TestCaseTemplete(self, fileName):
			sortFileModul.fileCheck(fileName)
			try:
				out = open("outputFile", "r")
				for line in out:
					print line
					self.assertRegexpMatches(line[:-1], "^[A-Z][a-z]+ [A-Z][a-z]+$")
				out.close()
			except IOError:
				print "File doesn't exist"
		

	#def test_goodCase(self):
	#		self.__TestCaseTemplete("NameSurname1.txt")

	#def test_onlyName(self):
	#		self.__TestCaseTemplete("NameSurname2.txt")
	
	#def test_emptyFile(self):
	#		self.__TestCaseTemplete("NameSurname3.txt")

	def test_numbersInFile(self):
			self.__TestCaseTemplete("NameSurname4.txt")
	
			
if __name__=='__main__':
	unittest.main()	

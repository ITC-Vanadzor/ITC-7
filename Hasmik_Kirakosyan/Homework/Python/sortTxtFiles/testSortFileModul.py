#!/usr/bin/python
import unittest
import re
import sortFileModul
import os, os.path

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
				resultList = []
				if (os.stat("outputFile").st_size != 0):
					for line in out:
						resultList.append(line[:-1])
				out.close()
				return resultList
			except IOError:
				print "File doesn't exist"
		

	def test_goodCase(self):
			checkList = self.__TestCaseTemplete("NameSurname1.txt")
			if not checkList:
				self.assertTrue(True)
			else:
				for nameSurname in checkList:
					self.assertRegexpMatches(nameSurname, "^[A-Z][a-z]+ [A-Z][a-z]+$")

	def test_onlyName(self):
			checkList = self.__TestCaseTemplete("NameSurname2.txt")
			if not checkList:
				self.assertTrue(True)
			else:
				for nameSurname in checklist:
					self.assertRegexpMatches(nameSurname, "^[A-Z][a-z]+ [A-Z][a-z]+$")

	def test_emptyFile(self):
			checkList = self.__TestCaseTemplete("NameSurname3.txt")
			if not checkList:
				self.assertTrue(True)
			else:
				for nameSurname in checklist:
					self.assertRegexpMatches(nameSurname, "^[A-Z][a-z]+ [A-Z][a-z]+$")

	def test_numbersInFile(self):
			checkList = self.__TestCaseTemplete("NameSurname4.txt")
			if not checkList:
				self.assertTrue(True)
			else:
				for nameSurname in checklist:
					self.assertRegexpMatches(nameSurname, "^[A-Z][a-z]+ [A-Z][a-z]+$")

			
if __name__=='__main__':
	unittest.main()	

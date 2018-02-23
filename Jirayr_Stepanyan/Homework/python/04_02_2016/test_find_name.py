#!/usr/bin/python
import unittest, sys

class Test(unittest.TestCase):	
	def setUp(self):
		self.read_txt = open("rseult", "r");
	def test_name(self):
		if re.match("[A-Z][a-z]{1,20} [A-Z][a-z]{1,20}", line):
			print"OK";
		else:
			print"ERROR!!!";
	def tearDown(self):
		self.read_txt.close();

unittest.main();

#!/usr/bin/python

import unittest

class TesstNames(unittest.TestCase):

	def test_names(self):
		
		fl=open('res.log','r')
		mystr=fl.read()
		fl.close()

		fl=open('bad_file.txt','r')
		for ln in fl:
			ln=ln.rstrip()
			self.assertEqual(-1,mystr.find(ln))
		fl.close

unittest.main()

#!/usr/bin/python
import Files
import unittest

class Test(unittest.TestCase):
    def setUp(self):
	self.text = []
	with open('./log', 'r') as self.tmp:
	    for self__line in self.tmp:
		self.text.append(self__line)
    def testLineCount(self):
	self.assertEqual(len(self.text), 1)
  
    def testPluse(self):
	self.assertRegexpMatches('Ani Hambaryan\n', self.text[0])

    def testMinus(self):
	self.assertRegexpMatches('AniHambaryan\n', self.text[0])

 
if __name__ == '__main__':
    unittest.main()

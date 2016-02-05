#!/usr/bin/python
import unittest

class SimpleWidgetTestCase(unittest.TestCase):
	 def setUp(self):
		
		with open('file.txt', 'r') as fi:
    			self.truefile = fi.readline()
		with open('foo.txt', 'r') as fa:
                        self.falsefile = fa.readline()
		with open('sortedFile.txt', 'r') as fb:
                        self.sortToFile = fb.readline()
  		
	 def tearDown(self):
	     	self.fi.close()
		self.fa.close()
         	self.fb.close()
                            
	 def test_corrected(self):
	 	self.assertRegexpMatches(truefile, sortedFile, msg="Yes, it is matched!!!")

	 def clearfile(self):
	 	open(sortedfile.txt, 'w').close()

	 def test_incorrected(self):
	 	self.assertNotRegexpMatches(falsefile, sortedFile, msg="Yes, it isn't matched")

	

if __name__ == '__main__':
    unittest.main() 

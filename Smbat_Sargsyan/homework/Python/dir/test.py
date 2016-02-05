import dir_file
import unittest
class TestFileAndDir(unittest.TestCase):
	def setUp(self):
		self.mytxt=[]
		with open('./summry', 'r') as self.f:
	    		for lines in self.f:
				self.mytxt.append(lines)
	def testTrue(self):
		self.assertRegexpMatches('Anun Azganun\n',self.mytxt[0])
	def testFalse(self):
		self.assertRegexpMatches('AnunAzganun\n',self.mytxt[0])
if __name__ == '__main__':
    unittest.main()

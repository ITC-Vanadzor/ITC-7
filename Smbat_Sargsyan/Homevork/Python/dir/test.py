import dir_file
import unittest
class TestFileAndDir(unittest.TestCase):
	def setUp(self):
		print("Call setUp")
		self.mytxt=[]
		with open('./summry', 'r') as self.f:
	    		for lines in self.f:
				self.mytxt.append(lines)
	def testNumber(self):
		self.assertRegexpMatches("1111 222\n",self.mytxt[0])
	def testTrue(self):
		self.assertRegexpMatches('Anun Azganun\n',self.mytxt[0])
	def testFalse(self):
		self.assertRegexpMatches('AnunAzganun\n',self.mytxt[0])
	def tearDown(self):
		self.mytxt=None
		print("Call tearDown")
if __name__ == '__main__':
    unittest.main()

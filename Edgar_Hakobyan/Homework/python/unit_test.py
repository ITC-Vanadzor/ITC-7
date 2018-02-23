import unittest
class test(unittest.TestCase):
	def setUp(self):
		self.file1 = open("file.txt","r")
	def test_line(self):
		line1="Edgar Hakobyan\n"
		text=self.file1.read()
		self.assertEqual(line1,text)
	def tesrDown(self):
		self.file1.close()
unittest.main()

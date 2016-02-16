#!/usr/bin/python
# for python2

class Singleton(object):
	_instance = None
	def __new__(class_, *args, **kwargs):
		if not isinstance(class_._instance, class_):
			class_._instance = object.__new__(class_, *args, **kwargs)
		return class_._instance


class Printer( Singleton ):
	text=None
	def __init__(self, t):
		self.text=t

	def printara(self):
		print(self.text)



mek=Printer('arajin')
erku=Printer('erkrord')

mek.printara()
erku.printara()

#!/usr/bin/python
# for python3

class Singleton(type):
	_instances = {}
	def __call__(self, *args, **kwargs):
		if self not in self._instances:
			self._instances[self] = super(Singleton, self).__call__(*args, **kwargs)
		return self._instances[self]


class Printer( metaclass=Singleton ):
	text=None
	def __init__(self, t):
		self.text=t

	def print(self):
		print(self.text)



mek=Printer('arajin')
erku=Printer('erkrord')

mek.print()
erku.print()

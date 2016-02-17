class Singleton(object):
	__instance = None

	def __new__(obj):
		if obj.__instance is None:
			obj.__instance = object.__new__(obj)
			print obj.__instance
		else:
			print 'aydpisi obyekt arden ka'
			return

a = Singleton()
print a
#b = Singleton()
#print b

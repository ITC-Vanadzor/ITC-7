#!/usr/bin/python

class Singleton:
	"""
	 Define singleton class \
	:returns: singleton
	"""
	class __OnlyOne: #class ganarate onlyOne object
		def __init__(self): 
			pass

	instance = {} #dictionary
	def __init__(self): 
		if self.__class__ not in Singleton.instance: 
			Singleton.instance[self.__class__] = Singleton.__OnlyOne()
			print 	Singleton.instance 
			return 
		else :
			print 'Stop!: you are trying to recreate a singleton'
			return 


b = Singleton()
c = Singleton()

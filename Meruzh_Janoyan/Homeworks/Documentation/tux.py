#!/usr/bin/python


def about_tux(param):
	""" This function returned information
	about TUX

	:param: name-to get name, birthday-to get date
	:rtype: return value is string	
	:return: returns name or date
	"""
	
	if param=='name':
		return 'TUX'
	if param=='birthday':
		return '25 August 1991'
	


print(about_tux('name'))
print(about_tux('birthday'))



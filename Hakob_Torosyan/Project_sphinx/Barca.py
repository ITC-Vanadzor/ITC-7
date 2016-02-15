#!usr/bin/python

def Team(player):
	""" This function returned information
	about Football team
	
	:player: name-to get name of team,   
	:rtype: return value is string	
	:return: returns name 
	"""
	if player == 'Neymar':
		return 'Forca Barca'
	else:
		return 'Another club'
	

print(Team('Neymar'))
print(Team('Berezovski'))

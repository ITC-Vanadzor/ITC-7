#!/usr/bin/python
list = ['@', '#', '$', '%', '&'] #list of symbols wich will be deleted
string = raw_input("Import string: ") 
str = "" #new string wich have not symbols from list
for element in string:
	if element not in list:
		str = str + element
print("Cleared string: ")
print(str)	 
	


	

		 

	

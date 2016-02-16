def string_function():
	""" The tutorial of string program of python

        :param: none
	:returns: string
	:value: none value
        """
	text = raw_input()
	newtext = text
	for i in range(0,len(text)):
		if text[i] == '$':
			newtext=newtext.replace(text[i],"")
		if text[i] == ">":
			newtext=newtext.replace(text[i],"")
		if text[i] == '*':
			newtext=newtext.replace(text[i],"")
	print newtext
string_function()


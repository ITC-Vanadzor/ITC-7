text = 'sddss**FF$fgg>$*HHk>l'
newtext = text
for i in range(0,len(text)):
	if text[i] == '$':
		newtext=newtext.replace(text[i],"")
	if text[i] == ">":
		newtext=newtext.replace(text[i],"")
	if text[i] == '*':
		newtext=newtext.replace(text[i],"")
print newtext

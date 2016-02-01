def test(text):
	simvol = ['!','@','$','%','^','(',')']
	for i in range(len(simvol)):
		if text == simvol[i]:
			return 1
	return 2
text = "asd%h$d^hj)"
newtext = ''
print "old text ",text
for i in range(len(text)):
	if test(text[i]) == 2:
		newtext = newtext + text[i];
print "new text ",newtext

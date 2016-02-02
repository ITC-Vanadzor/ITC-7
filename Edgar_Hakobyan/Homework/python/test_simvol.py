def test(text):
    simvol = ['!','@','#','$','%','^','*','(',')','-','+','|']
    for i in simvol:
        if text == i:
            return 1
    return 2
text = raw_input("write text! ")
newtext = ''
print "old text ",text
for i in text:
    if test(i) == 2:
        newtext = newtext + i;
print "new text ",newtext


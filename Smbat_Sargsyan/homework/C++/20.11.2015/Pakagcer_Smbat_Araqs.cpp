#include <iostream>
#include <cstring>
#include <cstdlib>
void sxal() {
    std::cout << "sxal" << std::endl;
    exit(1);
}
void stugum ( char openbr, char closebr, int* begin, int count) {
    int stugum = 1;
    int* end;
    end = begin+sizeof(char);
    do {
	if (*end == openbr) {
	    ++stugum;
	}
	if (*end == closebr) {
	    -- stugum;
	    if (stugum ==0) {	
		if (((begin-end)/sizeof(char))%2==0) {	
		    sxal();
		} 
	    } else   {
		break;
	    }	
	}
	end +=sizeof(char);
    } while ((begin-end)/sizeof(char) < count);
    
}
int main () {
    char text[] = "abs{jhk{hfahc}gk}jkj";
    int n=strlen(text);
    char *a=new char;       // pakagceri zangvac
    int j=-1;
    for (int i=0; i<n; ++i) {
	if (text[i]=='{' || text[i]=='}' || text[i] == '[' || text[i] == ']'|| text[i] == '(' || text[i] == ')') {
	    ++j;
	    a[j]=text[i];
	}
    }
    int m=strlen(a);
    if (m%2!=0) {
	sxal();
    }
    if (a[0]=='}' || a[0]==']' || a[0]==')') { 
	sxal();
    }
    int bacvox=0;
    int pakvox =0;
    int stugum;

    for (bacvox=0; bacvox <=m; ++bacvox) {
	stugum=0;
	switch (a[bacvox]) {
	    case '{':
		stugum ('{', '}', a[bacvox], (m-bacvox));
		break;
	    case '[':
		stugum ('[', ']', a[bacvox], (m-bacvox));
		break;
	    case '(':
		stugum ('(', ')', a[bacvox], (m-bacvox));
		break;
	    default: 
		sxal();
	}
    }
    std::cout << "chisht" <<std::endl;

    delete a;

    return 0;
}


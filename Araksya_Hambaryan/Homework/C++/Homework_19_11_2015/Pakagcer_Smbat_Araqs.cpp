#include <iostream>
#include <cstring>
#include <cstdlib>
void sxal() {
    std::cout << "sxal" << std::endl;
    exit(1);
}
void stugum ( char openbr, char closebr, int* begin, int* end) {
    int stugum = 1;
    int* end2;
    end2 = begin+sizeof(char);
    do {
	if (*end2 == openbr) {
	    ++stugum;
	}
	if (*end2 == closebr) {
	    -- stugum;
	    if (stugum ==0) {	
		if (((begin-end2)/sizeof(char))%2==0) {	
		    sxal();
		} 
	    } else   {
		break;
	    }	
	}
	end2 +=sizeof(char);
    } while (end2 <= end);
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
	if (a[bacvox]== '{') {
		stugum ('{', '}', a+bacvox*sizeof(char),a+ m*sizeof(char));
	}
	if (a[bacvox]=='[') {
		stugum ('[', ']', &a[bacvox], (m-bacvox));
	}
	if (a[bacvox]=='(') {
		stugum ('(', ')', &a[bacvox], m-bacvox);
    	}
    }
    std::cout << "chisht" <<std::endl;

    delete a;

    return 0;
}


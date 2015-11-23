#include <iostream>
#include <cstring>
#include <cstdlib>
void sxal() {
    std::cout << "sxal" << std::endl;
    exit(1);
}
void stugum ( char openbr; char closebr; int* begin; int count) {
    	int stugum = 1;
		std::cout <<"A0" << stugum<<std::endl;
	int* end;
	end = begin+sizeof(char);
		do {
		    if (*end == openbr) {
			++stugum;	std::cout <<"A" << stugum<<std::endl;
		    }
		    if (*end == closebr) {
			-- stugum;	std::cout <<"B" << stugum<<std::endl;
			if (stugum ==0) {	std::cout <<"C" << stugum<<std::endl;
			if (((begin-end)/sizeof(char))%2==0) {	std::cout <<"D" << stugum<<std::endl;
			    sxal();
			} 
			}
			else 
			{break;
		    }	std::cout <<"E" << stugum<<std::endl;
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
		stugum ('{', '}', &a[i]; &a[0]+m*sizeof(char));
		break;
	    case '[':
		stugum ('[', ']', &a[i]; &a[0]+m*sizeof(char));
		break;
	    case '(':
		stugum ('(', ')', &a[i]; &a[0]+m*sizeof(char));
		break;
	    default: 
		sxal();
	}
    }
	std::cout << "chisht" <<std::endl;

	delete a;

	return 0;
    }


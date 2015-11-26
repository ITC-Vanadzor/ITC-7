#include <iostream>
#include <cstring>
#include <cstdlib>
void sxal() {
    std::cout << "sxal" << std::endl;
    exit(1);
}
void stugum ( char openbr; char closebr; int* begin; int count) {
    	int stugum = 0;
	if ((*begin)== openbr) {
	    ++stugum;
		std::cout <<"A0" << stugum<<std::endl;
	int 	end = bacvox +sizeof(char);
		do {
		    if ((*pakvox)==openbr) {
			++stugum;	std::cout <<"A" << stugum<<std::endl;
		    }
		    if ((*pakvox)==closebr) {
			-- stugum;	std::cout <<"B" << stugum<<std::endl;
			if (stugum ==0) {	std::cout <<"C" << stugum<<std::endl;
			if ((pakvox-bacvox)%2==0) {	std::cout <<"D" << stugum<<std::endl;
			    sxal();
			} 
			}
			else 
			{break;
		    }	std::cout <<"E" << stugum<<std::endl;
		    pakvox+=sizeof(char);
		} while (pakvox < count);
	
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
		/*++stugum;
		std::cout <<"A0" << stugum<<std::endl;
		pakvox=bacvox+1;
		do {
		    if (a[pakvox]=='{') {
			++stugum;	std::cout <<"A" << stugum<<std::endl;
		    }
		    if (a[pakvox]=='}') {
			-- stugum;	std::cout <<"B" << stugum<<std::endl;
			if (stugum ==0) {	std::cout <<"C" << stugum<<std::endl;
			if ((pakvox-bacvox)%2==0) {	std::cout <<"D" << stugum<<std::endl;
			    sxal();
			} 
			}
			else 
			{break;
		    }	std::cout <<"E" << stugum<<std::endl;
		    ++pakvox;
		} while (pakvox < m);*/
		stugum ('{', '}', &a[i]; &a[0]+m*sizeof(char));
		break;
	    case '[':
		++stugum;
		pakvox=bacvox+1;
		do {
		    if (a[pakvox]=='[') {
			++stugum;
		    }
		    if (a[pakvox]==']') {
			--stugum;
			if ((pakvox-bacvox)%2==0) {
			    sxal();
			}
			if (stugum !=0) {
			    continue;
			}
		    }
		    ++pakvox;
		} while (pakvox <= m);
		break;
	    case '(':
		++stugum;
		pakvox=bacvox+1;
		do {
		    if (a[pakvox]=='(') {
			++stugum;
		    }
		    if (a[pakvox]==')') {
			--stugum;
			if ((pakvox-bacvox)%2==0) {
			    sxal();
			}
			if (stugum!=0) {
			    continue;
			}
		    }
		    ++pakvox;
		} while (pakvox <= m);
		break;
	    default: 
		sxal();
	}
    }
	std::cout << "chisht" <<std::endl;

	delete a;

	return 0;
    }


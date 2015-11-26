#include <iostream>
int i, count;

bool check (char* a,int& start) {
        char ch1, ch2;

	// set pair scope for each begin scope
        if ((a[i]=='{') || (a[i]=='"') || (a[i]=='[')){
 	ch1 = a[i]; 
        switch (ch1) {
		case '[': ch2 =']';
		case '{': ch2 ='}';
		case '"': ch2= '"';
        }
	}
	
	// check if in this scope another begin scope
	for (int i = start; a[i]!=ch2; ++i) {
	   if ((a[i]=='{') || (a[i]=='"') || (a[i]=='['))
	     if (!check(a, i)) {	
		return false;
		}

	// count of scopes in already good scope
	if ((a[i]=='{') || (a[i]=='}') || (a[i]=='"') || (a[i]=='[') || (a[i]==']')) count++;
	
	// if there is an alone scope function returns false, else true 
	if (count==0) {
			 start =i;
			 return true;
			}
	  else  {	
			count = 0;
			start = i;
			return check(a, i);
			}
	}
}

int main () {
char a[250];
char ch;
char ch2;

std::cout<<"a =";
std::cin>>a;
int i = 0;
bool t;
while ( a[i]!= '\0') {//--> I think there is a mistake here
	if (check(a,i)) t = true;
	else     {
			std::cout<<"\nScopes are wrong"<<std::endl; 
			break;
		 }
}

if (t) std::cout<<"\nScopes are correct"<<std::endl;
return 0;
}

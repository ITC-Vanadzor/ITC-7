#include <iostream>
int i, count;

bool check (char* a,int start) {
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
	for (int i = start+1; a[start]!=ch2; ++start) {
	   if ((a[i]=='{') || (a[i]=='"') || (a[i]=='['))
	     if (!check(a, i)) {	
		return false;
		}
	// count of scopes in already good scope
	if ((a[i]=='{') || (a[i]=='}') || (a[i]=='"') || (a[i]=='[') || (a[i]==']')) count++;
	
	// if there is an alone scope function returns false, else true 
	if (count%2!=0) { count = 0;
			  return false;
			}
	  else  {	
			count = 0;
			return true;
			}
	}
}

int main () {
char a[250];
char ch;
char ch2;

std::cout<<"a =";
std::cin>>a;

// for (int i =0; a[i]!= '\0'; ++i) --> I think there is a mistake here
	if (((a[i]=='{') || (a[i]=='"') || (a[i]=='[')) && check(a,i)) 
		 std::cout<<"\nScopes are right"<<std::endl;
	else     std::cout<<"\nScopes are wrong"<<std::endl; 

return 0;
}

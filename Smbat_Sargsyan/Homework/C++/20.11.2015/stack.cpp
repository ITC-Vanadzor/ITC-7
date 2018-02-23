#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stack>
void sxal() {
    std::cout << "sxal" << std::endl;
    exit(1);
}
int main ()
 {
    char text[] = "abs{jhk{h'fa'hc}gk}jkj";
    int n=strlen(text);
    char *skope = (char*) malloc(n*sizeof(char));       // pakagceri zangvac
    int j=0;
    for (int i=0; i<n; ++i)
      {
	if (text[i]=='{' || text[i]=='}' || text[i] == '[' || text[i] == ']'|| text[i] == '(' || text[i] == ')' || text[i]==34 || text[i]==39)    {
	           skope[j++]=text[i];
	    }
      }
    int m=strlen(skope);
    std::stack<char> mystack;
    if (m%2!=0)
      {
	  sxal();
      }
    if (skope[0]=='}' || skope[0]==']' || skope[0]==')') 
      { 
	sxal();
      } 
    int OneMark=0;  //   ' qanak  
    int TwoMark=0;  //   " qanak
    for (int i=0; i<m; ++i) 
      {
	std::cout << skope[i] << std::endl;
	switch (skope[i])
          {
	      case '}': 
		  if (mystack.top()=='{')
                    {
		       mystack.pop();
		    }
                  else 
                    {
		       sxal();
		    }
		       break;
	       case ']':
		   if (mystack.top()=='[') 
                    {
		       mystack.pop();
		    } 
                   else 
                    {
		       sxal();
		    }
		       break;
	        case ')':	
		    if (mystack.top()=='}') 
                     {
		        mystack.pop();
		     }
                    else 
                     {
		        sxal();
		     }
		        break;
	        case 39:                          // 39----ANCI kod '
		    ++OneMark;
		    if (OneMark==2) 
                     {
		        if (mystack.top()==39)
                         {
			    mystack.pop();
		         }
                        else 
                         {
			    sxal();
		         }
		      } 
                       else 
                          { 
		             mystack.push(skope[i]);
		          }
		          break;
	         case 34:                          // 34-----ANCI kod "
		    ++TwoMark;
		    if (TwoMark==2) 
                     {
		       if (mystack.top()==34) 
                        {
			   mystack.pop();
		        }
                       else 
                        {
			   sxal();
		        }
		     } 
                       else
                          { 
		           mystack.push(skope[i]);
		          }
		           break;
	          default:  mystack.push(skopei]); break;
	}
    }
    if (mystack.empty()) 
       {
	   std::cout << "chisht e" <<std::endl;
       }
    else 
       {
	std::cout << "sxal e " <<std::endl;
       }
    free(skope);

    return 0;
}



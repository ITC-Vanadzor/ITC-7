#include <iostream>
int main()
{
    char infix[] = {'?', '3', '+', '4', '*', '2', '/', '(', '1', '-', '5', ')', '^', '2', '?'};
    int a = 11;
    int b = 0;
    char prefix[12];
    char pre_symbol[11] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'};
     for(int i = 13; infix[i] != '?'; --i)
     {
         if(infix[i] != '+' || infix[i] != '-', infix[i] != '*' || infix[i] != '/', infix[i] != ')' || infix[i] != '^')
         {
             prefix[a] = infix[i];
             --a;
         }
         else if(infix[i] == '(')
         {
	    for( ; pre_symbol[b] != ')'; --b)
	    {
		prefix[a] = pre_symbol[b - 1];
		pre_symbol[b - 1] = 0;
		--a;
	    }
	 }
         else if((infix[i] == '+' || infix[i] == '-') && (pre_symbol[b - 1] != '+' || pre_symbol[b - 1] != '-'))
	 {	
	    prefix[a] = infix[i];
	    pre_symbol[b - 1] = infix[i];
	    --a;
	 }
	 else if((infix[i] == '+' || infix[i] == '-') && (pre_symbol[b - 1] == '+' || pre_symbol[b - 1] == '-'))
         {
	     pre_symbol[b] = infix[i];
	     ++b;
	 }
	 else if((infix[i] == '*' || infix[i] == '/') && pre_symbol[b - 1] == '^')
	 {
	    prefix[a] = pre_symbol[b - 1];
	    pre_symbol[b - 1] = infix[i];
	    --a;
	 }
	 else if(pre_symbol[b - 1] == '*' || pre_symbol[b - 1] == '/' && pre_symbol[b - 1] != '^')
	 {
	    pre_symbol[b] = infix[i];
	    ++b;
	 }
	 else
	 {
	     pre_symbol[b] = infix[i];
	     ++b;
	 }
	 for(int j = 11; j >= 0; --j)
	 {
	    if(pre_symbol[j])
	    {
		prefix[a] = pre_symbol[j];
		pre_symbol[j] = 0;
		--a;
	    }
	 }
     }
     for(int i = 0; i < 13; ++i)
     {
         std::cout << prefix[i];
     }
     std::cout << "\n";
     a = 0;
     b = 0;
     char postfix[12];
     char post_symbol[11] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'};
    for(int i = 1; infix[i] != '?'; ++i)
    {
	if(infix[i] != '+' || infix[i] != '-', infix[i] != '*' || infix[i] != '/', infix[i] != '(' || infix[i] != '^')
	{
	     postfix[a] = infix[i];
	     ++a;
	}
	else if(infix[i] == ')')
	{
	    for( ; post_symbol[b - 1] != '('; --b)
	    {
	        postfix[a] = post_symbol[b - 1];
	        post_symbol[b - 1] = 0;
	        ++a;
	    }
	}
	else if(infix[i] == '+' || infix[i] == '-')
	{
	    postfix[a] = post_symbol[b - 1];
	    post_symbol[b - 1] = infix[i];
	    ++a;
	}
	else if((infix[i] == '*' || infix[i] == '/') && (post_symbol[b - 1] == '+' || post_symbol[b - 1] == '-'))
	{
	    postfix[a] = infix[i];
	    ++a;
	}
	else if((infix[b - 1] == '*' || infix[b - 1] == '/') && (post_symbol[b-1]=='^'||post_symbol[b-1]=='*'||post_symbol[b-1]=='/'))
	{
	    postfix[a] = post_symbol[b - 1];
	    post_symbol[b - 1] = infix[i];
	    ++a;
	}
	for(int j = 11; j != 0; --j)
	{
	    if(post_symbol[j] != 0)
	    {
	        postfix[a] = post_symbol[j];
	        post_symbol[j] = 0;
	    }
	}
    }
    for(int i = 0; i < 13; ++i)
    {
        std::cout << postfix[i];
    }
    
  return 0;
}

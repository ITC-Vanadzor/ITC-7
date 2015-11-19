#include <iostream>
#include <cstring>
int main()
{
    char tox[]= "[juttit]uui{kkmk";
    std::cout<<tox<<std::endl;
    
    bool flag[4];
    int n = strlen(tox);
	
	for(int i = 0; i < 4; ++i)
	{
		flag[i] = true;
	}
    for(int i = 0; i < n; ++i)
    {
        if(tox[i] == '[' && flag[0]==true )
	{
        flag[0]=false;
    }
        else if(tox[i] == ']' && flag[0]==false )
	{
        flag[0]=true;
    }
	    else if(tox[i] == '{' && flag[1]==true )
	{
        flag[1]=false;
    }
        else if(tox[i] == '}' && flag[1]==false )
	{
        flag[1]=true;
    }    
        else if(tox[i] == '\"' && flag[2]==true )
	{
        flag[2]=false;
    }
        else if(tox[i] == '\"' && flag[2]==false)
	{
        flag[2]=true;
    }
		else if(tox[i] == '\'' && flag[3]==true)
	{
		flag[3]=false;
    }
	    else if(tox[i] == '\'' && flag[3]==false )
	{
        flag[3]=true;
    }
    }
    if( flag[0] && flag[1] && flag[2] && flag[3] )
	{
		std::cout<<"pakagcer@ chisht en"<<std::endl;
	}
	else{
		std::cout<<"pakagcer@ chisht chen"<<std::endl;
	}
return 0;
}

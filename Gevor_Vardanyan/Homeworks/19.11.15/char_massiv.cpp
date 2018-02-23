// [] {} "" ''  ete meknumeki zuygy chka ktpi vor textum sxal ka

#include <iostream>
#include <cstring>

int main()
{
    char ch[100];
    std::cout<<"TEXT->";
    std::cin>>ch;
    
    int flag[6]={0};
    int n = strlen(ch);

    for(int i = 0; i < n; ++i)
    {
        if(ch[i] == '['  ){
            ++flag[0];
  	  } else if(ch[i] == ']' ){
            ++flag[1];
  	  } else if(ch[i] == '{' ){
            ++flag[2];
	  } else if(ch[i] == '}' ){
            ++flag[3];
  	  } else if(ch[i] == '"' ){
            ++flag[4];
	  } else if(ch[i] == '\'' ){
            ++flag[5];
    }
}
    if(flag[0]==flag[1] && flag[2]==flag[3] && !(flag[4]%2) && !(flag[5]%2)){
		std::cout<<"There arn't any mistakes in the text!"<<std::endl;
	}
	else{
		std::cout<<"There are mistakes in the text!"<<std::endl;
	}
    
return 0;
}

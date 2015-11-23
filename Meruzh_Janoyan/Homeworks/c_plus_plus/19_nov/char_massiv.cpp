
// [] {} () "" ''  

#include <iostream>
#include <stack>

int main()
{
    char *ch=new char[100];
    std::cout<<"TEXT->";
    std::cin>>ch;

    std::stack <char> my_stack;
    bool flag1=true;//for symbol "
    bool flag2=true;//for symbol '

    while(*ch!='\0'){

        switch (*ch){

        case '{':
            my_stack.push(*ch);
            break;
        case '}':
            if(my_stack.top()=='{'){
                my_stack.pop();}
            break;
        case '[':
            my_stack.push(*ch);
            break;
        case ']':
            if(my_stack.top()=='['){
                my_stack.pop();}
            break;
        case '(':
            my_stack.push(*ch);
            break;
        case ')':
            if(my_stack.top()=='('){
                my_stack.pop();}
            break;
        case '"':
            if(flag1){
                    my_stack.push(*ch);
                    flag1=false;
                    }
            else if(my_stack.top()=='"'){
                    my_stack.pop();
                    flag1=true;
                    }
            break;
        case '\'':
            if(flag2){
                    my_stack.push(*ch);
                    flag2=false;
                    }
            else if(my_stack.top()=='\''){
                    my_stack.pop();
                    flag2=true;
                    }
            break;

        }
        ++ch;
    }

    if(my_stack.size()==0){
        std::cout<<"There arn't any mistakes in the text!"<<std::endl;
        }
    else{
        std::cout<<"There are mistakes in the text!"<<std::endl;
        }



return 0;
}


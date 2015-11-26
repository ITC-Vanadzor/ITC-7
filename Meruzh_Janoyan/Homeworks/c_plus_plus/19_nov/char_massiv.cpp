// [] {} () "" ''

#include <iostream>
#include <stack>

std::stack <char> my_stack;

void test(char element,bool &error_flag){

    if(my_stack.empty()){
                error_flag=true;
                }
    if(my_stack.top()==element){
                my_stack.pop();
                }
}
int main()
{
    char *ch=new char[100];
    std::cout<<"TEXT->";
    std::cin>>ch;


    bool flag1=true;//for symbol "
    bool flag2=true;//for symbol '
    bool error_flag=false;

    while(*ch!='\0'){

        switch (*ch){

        case '{':
            my_stack.push(*ch);
            break;
        case '}':
            test('}',error_flag);
            break;
        case '[':
            my_stack.push(*ch);
            break;
        case ']':
            test(']',error_flag);
            break;
        case '(':
            my_stack.push(*ch);
            break;
        case ')':
            test(')',error_flag);
            break;
        case '"':
            if(flag1){
                    my_stack.push(*ch);
                    flag1=false;
                    }
            else {
                    test('"',error_flag);
                    flag1=true;
                    }
            break;
        case '\'':
            if(flag2){
                    my_stack.push(*ch);
                    flag2=false;
                    }
            else {
                    test('\'',error_flag);
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

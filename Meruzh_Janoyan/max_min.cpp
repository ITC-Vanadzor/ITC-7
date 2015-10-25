#include<iostream>
using namespace std;

int main()
{
    int it=0,k=1;
    unsigned int uit=0;
    
    for(int i=0;i<31;++i)
        {
            it|=k; 
            uit|=k;
            k<<=1;
        }
        
    uit|=k;//32-rd bit@ dardznum e 1
    cout<<"int min="<<k<<endl;
    cout<<"int max="<<it<<endl;
    cout<<"Unsigned int min=0"<<endl<<"Unsigned int max="<<uit<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int integer=0, k=1;
    unsigned int uinteger=0;
    
    for(int i=0; i<31; ++i)
        {
            intrger|=k; 
            uinteger|=k;
            k<<=1;
        }
        
    uinteger|=k;//32-rd bit@ dardznum e 1
    cout<<"int min="<<k<<endl;
    cout<<"int max="<<integer<<endl;
    cout<<"Unsigned int min=0"<<endl<<"Unsigned int max="<<uinteger<<endl;

    return 0;
}

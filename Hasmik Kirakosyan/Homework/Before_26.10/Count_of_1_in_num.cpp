#include <iostream>

using namespace std;

int main () {
    int n,count=0;
    
    cout<<"\nEnter the number : ";
    cin>>n;
    
    for (int i=0; i<=sizeof(int)*8-2; ++i) {
        if ((n&(1<<i))!=0) ++count;
    }
    cout<<"\nCount of 1 in binary form of number "<<n<<" is "<<count<<endl;
    
    
    char ch;
    cin>>ch;
    return 0;
}

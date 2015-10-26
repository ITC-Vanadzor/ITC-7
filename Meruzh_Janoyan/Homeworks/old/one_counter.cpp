#include<iostream>
using namespace std;

int main()
{
    int num;
   	cout<<"Input N:";
   	cin>>num;
   	
   	int counter=0;
   	unsigned int k=1;
   	k<<=31;
   	for(int i=0;i<32;i++) 
   		{
   			if(num&k) {
   						counter++;
   						cout<<"1";
   				     	}
   			else { cout<<"0"; }
   			k>>=1;
   		}
   		
   	cout<<endl<<"Counter="<<counter<<endl;
    return 0;
}

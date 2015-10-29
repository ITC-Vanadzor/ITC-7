#include<iostream>
using namespace std;

int main()
{
    int num, count=0;
   	cout<<"Input N:";
   	cin>>num;
   	unsigned int k=1;
   	k<<=31;
   	for(int i=0;i<32;i++) 
   		{
   			if(num&k) {
   						count++;
   						cout<<"1";
   				     	}
   			else { cout<<"0"; }
   			k>>=1;
   		}
   		
   	cout<<endl<<"Count="<<count<<endl;
    return 0;
}

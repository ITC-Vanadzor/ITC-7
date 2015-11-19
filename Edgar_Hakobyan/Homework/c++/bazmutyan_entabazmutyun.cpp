#include <iostream>
using namespace std;
int main()
	{
		char elems[100]; 
		int n,i;
		cout<<"nermuceq bazmutyan andamneri qanak@:"; cin>>n;
		cout<<"nermuceq bazmutyan andamnerin:"<<endl;
		for(i=0;i<n;i++)
			cin>>elems[i]; //nermuce bazmutyan andamner@
		cout<<"{ 0}"<<endl;
		for(int s=1;s<(1<<n);s++) //gtnum enq bolor voch zroyakan arjeqner@
			{
				cout<<"{";
				for(int e=0;e<n;e++) //yuraqanchyur tarric	
					{
						if(s&(1<<e))
						{
							cout<<" "<<elems[e];
						}
					}
				cout<<"}"<<endl;
			}
		return 0;
	}

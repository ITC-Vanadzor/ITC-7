#include <iostream>
using namespace std;

int min_sum=INT_MAX;
int max_value=0;

void test(int q)
{
	int sum=0,k=q;
	while(k>9)
	{
		sum+=k%10;
		k/=10;
	}
	sum+=k;

	if(sum<=min_sum && q>max_value)
	{
		min_sum=sum;
		max_value=q;
	}
}


int main()
{
	int n;
	cout<<"input N:";
	cin>>n;
	
	int i;
	for(i=2;i<n;++i)
	{
		if(n%i==0) test(i);
	}

	cout<<"Min sum="<<min_sum<<endl<<"Max_value="<<max_value<<endl;
	return 0;
}

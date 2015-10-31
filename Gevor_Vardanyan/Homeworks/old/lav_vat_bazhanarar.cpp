//amenalav ev amenavat bazhanararner
#include <iostream>
using namespace std;

int min_sum=99999999,min_value=99999999;
int max_value=0,max_sum=0;

void test(int q)
{
	int sum=0,copy=q;
	while(copy>9)
	{
		sum+=copy%10;
		copy/=10;
	}
	sum+=copy;

	if(sum<min_sum || (q>max_value) && (sum==min_sum))//amenavat
	{
		min_sum=sum;
		max_value=q;
	}
	if(sum>max_sum || (q<min_value)&&(sum==max_sum)){//amenalav
		max_sum=sum;
		min_value=q;
	}
}


int main()
{
	int n;
	cout<<"input N:";
	cin>>n;
	
	int i;
	for(i=2;i<=n;++i)
	{
		if(n%i==0) test(i);
	}

	cout<<"Amenavat="<<max_value<<endl;
	cout<<"Amenalav="<<min_value<<endl;

	return 0;
}

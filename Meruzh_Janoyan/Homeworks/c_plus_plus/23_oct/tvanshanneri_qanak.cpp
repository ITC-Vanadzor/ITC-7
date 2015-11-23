#include<iostream>
using namespace std;


int counter(int index,int start_value, int end_value);
int calc(int i,const int n);
int main()
{
	int s,e;
	cout<<"Input Start Value[n>0]:";
	cin>>s;
	cout<<"Input End Value[n>"<<s<<"]:";
	cin>>e;
	

	int i;
	cout<<"__BY_STANDART__________BY_ALGORITHM__"<<endl;
	for(i=0;i<10;++i)
		{
			cout<<i<<"->   "<<counter(i,s,e);
			cout<<"                "<<calc(i,e)-calc(i,s-1)<<endl;
		}
	
	

	return 0;
}
int calc(int i,const int n)//optimal algoritmov hashvox funkcia
{
	int c=1,q=n,zero=0;
	while(q>9) 
	{
		q/=10; 
		c*=10;
		zero+=c;
	}
	q=0;
	if(!i) q=-zero;
	int prev=0,this_num;
	while(c>9)
	{
		this_num=n/c;
		if(this_num>9) this_num%=10;

		if(i<this_num) {q+=c*(prev+1);}
		else if(i==this_num) {q+=(c*prev)+n%c+1;}
		else {q+=(c*prev);}
		c/=10;
		prev=n/(c*10);
	}
	if(i<=n%10) {q+=prev+1;}
	else {q+=prev;}

	return q;
}


int counter(int index,int start_value, int end_value)//standart algoritmov hashvox funkcia
{
	int c=0;
	for(int i=start_value;i<=end_value;++i)
		{
			int j=i;
			while(j>9){
					if(j%10==index) c++;
					j/=10;
				}
			if(j==index) c++;
		}
	return c;
}

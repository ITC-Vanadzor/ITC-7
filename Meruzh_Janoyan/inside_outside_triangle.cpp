#include <iostream>
using namespace std;

int cord[4][2];//A,B,C,O koordinatner

double erankyan_makeres(int,int,int);
void  get_cord(char*,int ,int);

int main()
{
	get_cord("Input A(x) ",0,0);
	get_cord("Input A(y) ",0,1);

	get_cord("Input B(x) ",1,0);
	get_cord("Input B(y) ",1,1);

	get_cord("Input C(x) ",2,0);
	get_cord("Input C(y) ",2,1);

	get_cord("Input O(x) ",3,0);
	get_cord("Input O(y) ",3,1);



	double s=erankyan_makeres(0,1,2);//himnakani makeresy

	double s1=erankyan_makeres(0,1,3);//ereq pokreri makeresnery

	double s2=erankyan_makeres(0,2,3);

	double s3=erankyan_makeres(1,2,3);

	if(!s) cout<<"Incorrect triangle!"<<endl;
	else if(s==s1+s2+s3) cout<<"The point inside a triangle!"<<endl;
	else cout<<"The point outside a triangle!"<<endl;
	return 0;
}
void  get_cord(char* name,int p ,int k)
{
	cout<<name<<"[1-50]: ";
	int v;
	cin>>v;
	if (v>50 || v<1) get_cord(name,p,k);
	else if (k)
	{
		for(int i=0;i<4;i++){
			if(v==cord[i][1] && cord[i][0]==cord[p][0]) { get_cord(name,p,k);}}
		cord[p][k]=v;
	}
	else 	cord[p][k]=v;

}
double erankyan_makeres(int a,int b, int c)
{
	return abs((cord[b][0]-cord[a][0])*(cord[c][1]-cord[a][1])-(cord[c][0]-cord[a][0])*(cord[b][1]-cord[a][1]))/2;

}
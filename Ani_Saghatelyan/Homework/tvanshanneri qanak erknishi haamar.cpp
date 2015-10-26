# include <iostream>
using namespace std;
int main()
{
	int tv[10]={};
	int N;
		cout<<"\n Enter n\t";
		cin>>N;
	int n=N;// vorov kanenq popoxutyunner
		while(n>=10){
				tv[n%10]++;// tvi verjin tvanshanin hamapatasxan tarr@ ++
				n/=10;// tiv@ ktrum enq verjic
			 }
		tv[n]++;
		int qanord=N;
		
		while(qanord>0){
			 qanord/=10;//tiv@ ktrum enq verjic
	
	
		for(int i=0; i<=9; i++){// aydqan hat ogtagortsvum e yuraqanchyur tviv@(10-avorov)
			 tv[i]+=qanord;
				}

	for(int i=1; i<=qanord; i++){//
		if(i==qanord){
					tv[i]+=N%10;
					break;
					}
			tv[i]+=10;
				
			}
	int mnacord=N%10;
	
		for(int i=0; i<mnacord; i++){//0-ic minchev tvi verjin miavori@ avelacnum enq zangvatsi hmpt. tarrer@
			tv[i]++;
			}
		}

		for(int i=0; i<=9;i++){// tpum enq zangvats@
			cout<<i<<" "<<tv[i]<<endl;
		}

	return 0;
}
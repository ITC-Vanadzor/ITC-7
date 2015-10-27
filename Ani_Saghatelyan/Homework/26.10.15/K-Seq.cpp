//tsragir, vor voroshum e  N hajordakanutyan hamar K zarmanahrash hajordakanutyun
// tsragir@ himnvats e 2 bazmutyunneri hatman vra
# include <iostream>
using std::cout;
using std::cin;
using std::endl;

void hashvarkGumarov(int K, int N){
	cout<<"K-zarmanahrash hajordakanutyun@ klini\t";
	
      int SumN=0;
		for(int i=1; i<N; ++i ){
			SumN+=i;
			cout<<i<<"\t";
			 }
		
		cout<<K-SumN<<endl;

		
};




int main()
{
int K=0;
	cout<<"Xndrum enq nermutsel hajordakanutyan andamneri gumar@ `K-n\t";
	cin>>K;
	while(K<=0){
			cout<<"K-i hamar nermutsel bnakan tiv(mets 0-ic)\t";
			cin>>K;
			}
int N=0;
	cout<<"Xndrum enq nermutsel hajordakanutyan andamneri qanak@` N-@\t";
	cin>>N;
		while(N<=0){
			cout<<"N-i hamar nermutsel bnakan tiv(mets 0-ic)\t";
			cin>>N;
			}


	
	
	hashvarkGumarov(K, N);
	
		
		return 0;
}

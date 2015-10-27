#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int *q, n;
	cout << "tpel te vorerrord andami bazmutyunn eq uzum; ";
	cin >> n;
	q = new int[n]; // dinamikhishoxutyan mej nor tex en azatum n-i hamar
	for(int i = 0; i < n; i++) // lcnum enq mer masiv@ 1-ic minchev n elementnerov
		q[i] = i + 1;
	int *p;
	p = new int[n]; //dinamikhishoxutyan mej nor tex en azatum p-i hamar
	for(int i = 0; i < n; i++) // n elementanoc masiv@ veracum enq zroneri 2-akan hamakargov lucman hamar
		p[i] = 0;
    cout << "datark bazmutyun" << endl;
   for(int k = 0; k < pow(2,n); k++) // cikl@ pttvum e minchev 2-i n astijan
    {
    	for(int i = 1; i <= n; i++) // ays ciklum 2-akan hamakargov 1 enq gumarum
    	{
    		if(p[n -i] == 0)
    			{
    			p[n - i] = 1; break;}
    		
    			p[n - i] = 0;
    	}
    	for(int i = 0; i < n; i++) // ays funkcian kanchum e mer q masivi meji i-erord elementin
    	{
    		if(p[i]) 
    			cout << q[i];
    		if(q[i] == 1) // dnum e storaket q masivi amen i-erord elementi true linelu depqu
    			cout << ",";
		}
    }
    
    return 0;
}

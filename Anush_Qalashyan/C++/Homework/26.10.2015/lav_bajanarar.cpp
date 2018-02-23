//trvac N tvi bajanarneric gtnel amenalavy....aysinqn ayn bajanarary vori tvanshanneri gumary amenamecn e...
#include <iostream>

int main() 
{
	int N;
	int bajanarar;
	std::cout << "N=";
	std::cin >> N;
	int chap=N/2;
	int A[chap];
	int q=0;

	for (int i = 2; i <= N; ++i)
		{
			if(N%i==0) 
			{
				 bajanarar=i;
		                 A[q]=bajanarar;
				 ++chap;
		                 q++;                         
				 std::cout << "bajanarar="<< bajanarar << std::endl;
			} 
	
		}

	int B[q];
	int temp;
	for (int j=0; j < q; ++j)
		{
			B[j]=0;
			temp = A[j];
		        	while (temp>0)	
					{
					int k=temp%10;
					temp=temp/10;
					B[j]+=k;

					}
							
                }

        int lavbajanarar=B[0];
        int a=0;
	for (int i=0; i < q; ++i)
	{
		if (B[i]>lavbajanarar)
		{
			a = i;	
			lavbajanarar=B[i];
		}
				
	}
	std::cout << "Lav Bajanarar  ->>  " << A[a] << std::endl;
	return 0;
}

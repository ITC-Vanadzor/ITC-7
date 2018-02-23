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
		                 q++;                          //q-zangvaci elementneri qanaky
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
				// std::cout << "B[i]=" <<B[j] << std::endl;					
                }

        int vatbajanarar=B[0];
        int a=0;
	for (int i=0; i < q; ++i)
	{
		if (B[i]<vatbajanarar)
		{
			a = i;	
			vatbajanarar=B[i];
		}
	}
	std::cout << "Vat Bajanarar  ->>  " << A[a] << std::endl;
	return 0;
}

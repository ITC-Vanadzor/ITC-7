#include <iostream>
bool stugum (bool* a, int N, int i, int j) {
    int summ = a[i*N+j] + a[(i-1)*N+j] + a[i*N+j-1] + a[(i-1)*N+j-1];
	return (summ%2==0);
}

int main () {
    int N=10;
    /*do {
	std::cout << "N= ";
	std::cin >> N;
    } while ((N < 2) || (N > 100));*/
    bool a[N][N];
    for (int i = 0; i < N; ++i) {
	for (int j = 0; j < N; ++j) {
	    a[i][j]=0;
	}
    }
a[1][2]=1;
a[1][3]=1;
    int count = 0;
    if (a[0][0]) {
	++count;
    }
    int i=0;
    int j=1;
	while (i < N) {
	    std::cout << "a  " << i << std ::endl;
	    while (j < N) {
		std::cout<< "b  " << j << std ::endl;
		    std::cout << "aij " << a[i][j] << std::endl;
		if (a[i][j]) {
		    std::cout << "aij " << a[i][j] << std::endl;
		    bool LeftOk = true;
		    bool UpOk = true;
		    if ((j != 0) &&  (a[i][j-1])) {
			LeftOk = false;
		    }
		    if ((i != 0) && (a[i-1][j])) {
			UpOk=false;
		    }
		    if (LeftOk && UpOk && stugum (*a, N, i, j)) {
			++count; 
			
		    }
		
		}
		++j;
	    }
	    ++i;
	    j=0;
	}
    std::cout << count << " boats " << std::endl;
    return 0;
}

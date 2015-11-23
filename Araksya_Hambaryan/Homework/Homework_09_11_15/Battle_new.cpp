#include <iostream>
// hamarum enq, vor mutqayin tvyalner@ chisht en 

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
    a[4][4]=1;
    a[4][5]=1;
    a[5][4]=1;
    a[5][5]=1;
    int count = 0;
    if (a[0][0]) {
	++count;
    }
    int i=0;
    int j=1;
    while (i < N) {
	while (j < N) {
	    if (a[i][j]) {
		bool LeftOk = true;
		bool UpOk = true;
		if ((j != 0) &&  (a[i][j-1])) {
		    LeftOk = false;
		}
		if ((i != 0) && (a[i-1][j])) {
		    UpOk=false;
		}
		if (LeftOk && UpOk) {
		    ++count; 

		}

	    }
	    ++j;
	}
	++i;
	j=0;

    }
    for (int i=0; i<N; ++i) {
	std::cout << std::endl;
	for (int j=0; j<N; ++j) {
	    std::cout<< a[i][j] << "  ";
	}
    }
    std::cout << count << " boats " << std::endl;
    return 0;
}

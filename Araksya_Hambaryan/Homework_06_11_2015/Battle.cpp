#include <iostream>

int main () {
    int N=0;
    do {
	std::cout << "N= ";
	std::cin >> N;
    } while ((N < 2) || (N > 100));
    int a[N][N];
    for (int i = 0; i < N; ++i) {
	std::cout << i << "tox` ";
	for (int j = 0; j < N; ++j) {
	    std::cin >> a[i][j];
	}
    }
    int count = 0;
    for (int i = 0; i < N; ++i) {
	for (int j = 0; j < N; ++j) {
	    if (a[i][j] == 1) {
		if (i==0) {
		    if (j==0)  { ++count; continue; }
		    if ((j!= 0) &&  ( a[i][j-1] ==0)) {
			++count; continue;}
		} else {
		    if ((j == 0) && (a[i-1][j] == 0)) { ++count; continue; }
		    if ((j != 0) && (a[i-1][j] == 0) && (a[i][j-1] == 0)) {++count; continue; }
		}
	    }
	}
    }
    std::cout << count << " boats " << std::endl;
    return 0;
}

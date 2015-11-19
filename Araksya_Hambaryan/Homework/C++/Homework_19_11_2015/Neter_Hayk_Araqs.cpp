#include <iostream>
#define n 11
// Ha]vel "<--<<" kam ">>-->" neteri qanak@

bool cheack(char* net) {
    if(((net[0]=='>') && (net[1]=='>') && (net[2] == '-') && (net[3] == '-') && (net[4] == '>')) || ((net[0] == '<') && (net[1] == '-') && (net[2] == '-') && (net[3] == '<') && (net[4] == '<'))) {
	return true;
    }
    return false;
}

int main () {
    char net[n];
    int count=0;
    std::cin >> net;
    for (int i = 0; i < n; ++i) {
	if (cheack(&net[i])) {
	    ++count;
	}
    }
    std::cout << "neteri qanakn e` " <<  count << std::endl;
    return 0;
}

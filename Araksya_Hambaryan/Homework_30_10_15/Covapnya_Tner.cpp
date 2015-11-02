#include <iostream>
#include <string>
#include <cmath>
// Voroshel te qani tun e gtnvum Armeni ev Ashoti tneri mijev, ete Ashoti tnic aj gtnvum e N tun, dzax M tun, isk Armeni tnic aj ev dzax gtnvum en havasar qanakutyamb tner

int Nermucum (std::string Koxm) {
    int M=-1;
    while ((M < 0) || (M > 100)) {
	std::cout << "Ashoti tnic " << Koxm << " gtnvum e ( < 100) ";
	std::cin >> M;
    }
    return M;
}
int main () {
    int N = Nermucum ("dzax");
    int M = Nermucum ("aj");
    int MijankyalTner = fabs (N - M) /2 -1;
    std::cout << "Ashoti ev Armeni tneri mijev gtnvum e " << MijankyalTner << "  tun" << std::endl;
    return 0;
}



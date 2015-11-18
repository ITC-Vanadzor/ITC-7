# include <iostream>
using namespace std;
# include <limits>

int main() {

             cout<< "Minimum of int is\t"<< std::numeric_limits<int>::min() <<endl;
             cout<< "Maximum of int is\t"<< std::numeric_limits<int>::max() <<endl;
             cout<< "Minimum of Unsigned int is\t"<< std::numeric_limits<unsigned int>::min() <<endl;
             cout<< "Maximum of Unsigned int is\t"<< std::numeric_limits<unsigned int>::max() <<endl;
              cout<<endl; 
             cout<< "Minimum of short is\t"<< std::numeric_limits<short>::min() <<endl;
             cout<< "Maximum of short is\t"<< std::numeric_limits<short>::max() <<endl;
             cout<< "Minimum of Unsigned short is\t"<< std::numeric_limits<unsigned short>::min() <<endl;
             cout<< "Maximum of Unsigned  short is\t"<< std::numeric_limits<unsigned short>::max() <<endl;
 

  return 0;
}



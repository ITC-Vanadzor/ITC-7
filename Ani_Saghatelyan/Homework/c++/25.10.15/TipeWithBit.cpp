
// voroshvum e int ev unsigned int tipi chaper@ <<-i mijocov
# include <iostream>
using namespace std;
# include <limits>

int main() {

             cout<< "Minimum of int is\t"<< std::numeric_limits<unsigned  int>::min() <<endl;//stugman hamar
             cout<< "Maximum of int is\t"<< std::numeric_limits<unsigned int>::max() <<endl;//stugman hamar
			 unsigned int max=~0;//maximum@ klini 0-i hakadardz@
             cout<< "Max of unsigned int is\t"<<max  <<endl;
             cout<< "Min  of unsigned int is\t"<<max+1<<endl;// metsaguyni hajord tiv@ klini max+1
			 cout<<endl;

             cout<< "Minimum of  int is\t"<< std::numeric_limits< int>::min() <<endl;//stugman hamar
             cout<< "Maximum of  int is\t"<< std::numeric_limits< int>::max() <<endl;//stugman hamar
             cout<<endl;

			cout<< "Minimum of  int is\t"<< (1<<((sizeof(int)*8)-1)) <<endl;//hamarjeq e 2^sizeof(int)*8)-1-in: 
            cout<< "Maximum of  int is\t"<< ((1<<((sizeof(int)*8)-1))-1)<<endl;//hamarjeq e 2^sizeof(int)*8)-in: 1hanum enq, vor nshan@ drakan lini u chpoxvi bacasakani
            cout<<endl; 

  return 0;
}



# include <iostream>
using namespace std;
#define  Debug 
#ifdef Debug
  #define E  cout<<"Entering\t"<<__FUNCTION__<<"\t"<<__LINE__<<endl;
  #define L  cout<<"Leaving \t"<<__FUNCTION__<<"\t"<<__LINE__<<endl;
#else 
   #ifdef Release
     #define E 
     #define L
#else 
#error
#endif
#endif

void Sum(){
E     
L
};
  

  int main(){
E
 Sum();
L
   return 0;
}

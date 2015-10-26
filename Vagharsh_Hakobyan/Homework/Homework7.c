//Հաշվում է int֊ի և unsigned int֊ի ամենամեծ և ամենափոքր արժեքները

#include <iostream>
using namespace std;



int main()
{
  int n=0,i;
  unsigned int m=0;
  for (i=0;i<(sizeof(n)*8-1);i++){
    n=n|(1<<i);
  }
  cout << "int֊ի ամենամեծ՝ " << n <<endl;
  n=n+1;
  cout << "int֊ի ամենափոքր՝ " << n <<endl;
  for (i=0;i<(sizeof(m)*8);i++){
    m=m|(1<<i);
  }
  cout << "unsigned int֊ի ամենամեծ՝ " << m <<endl;
  cout << "unsigned int֊ի ամենափոքր՝ " << 0 <<endl;

  return 0;
}


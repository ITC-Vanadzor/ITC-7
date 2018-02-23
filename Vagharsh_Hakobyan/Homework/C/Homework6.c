//Calculate ֆունկցիայի նկարագրություն define֊ի մեջ
#define calculate {static int i=1;  cout<< __FUNCTION__ <<" ֆունկցիայի մեջ մտել է "<< i <<" անգամ" << endl;i++;}

#include <iostream>
using namespace std;



int main()
{
  calculate;
  calculate;
  calculate;
  calculate;
  calculate;
  calculate;
  calculate;
  return 0;
}


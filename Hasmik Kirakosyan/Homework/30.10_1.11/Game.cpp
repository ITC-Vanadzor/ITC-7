#include <iostream>


int Armans_step (int sum, int prev_step) {
    if (sum==1) {
                std::cout<<"\n\n Winner is Armen = 2";
                return 0;
                }
    else {
       prev_step=(prev_step%3!=0)? 3-prev_step : 2;
       return prev_step; 
       } 
}

int Armens_step (int sum, int prev_step) {
    if (sum==1) {
                std::cout<<"\n\n Winner is Arman = 1";
                return 0;
                }
    else {
       prev_step=(prev_step%3!=0)? 3-prev_step : 2;
       return prev_step; 
       } 
}


int main()
{
int A=0,B=0;

std::cout << "A= " ; std::cin >> A;
std::cout <<" B= " ; std::cin >> B;

int gen_num=A+B;
/*
int i=1;
int prev_step=0;

while (gen_num>4) {
 if (i%2==0) prev_step=Armens_step (gen_num, prev_step);
    else prev_step=Armans_step (gen_num, prev_step);
 i++;  
 gen_num-=prev_step;  
}  

                if (i%2==0) std::cout<<"\nWinner is Armen = 2";
                   else std::cout<<"\nWinner is Arman = 1";

  

*/

if ((gen_num-4)%3==0 && gen_num>4){
                                    std::cout<<"\nWinner is Arman = 1";
}
else  if (gen_num==2){
                                    std::cout<<"\nWinner is Arman = 1";
}
else {
                                    std::cout<<"\nWinner is Armen = 2";
}


return 0;
}



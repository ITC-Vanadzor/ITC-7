// The AREAIJ isn't correct
# include <iostream>
 static int imax=0;
 static  int imin=0;
 static  int jmax=0;
 static  int jmin=0;
 static  int Area=0;
 static  const int N=4;
 static int Array[N][N];

void Determine( int i, int j){
        if(Array[i][j]){
          Array[i][j]==2;
          Area++;
          std::cout<<"  Area "<<Area<<std::endl;
          
             if(jmax<N-1){
                   jmax=j-1;
                  //std::cout<<" jmax "<<jmax<<std::endl;
                 
      		 Determine(i, j+1);
               }     
               if(jmin>0){
                  jmin=j-1;
                  //std::cout<<" jmin "<<jmin<<std::endl;
                  Determine(i, j-1); 
                } 
             
                if(imax<N-1){
                  imax=i-1;
                  // std::cout<<"imax "<<imax<<std::endl;
                  Determine(i-1, j);
                   }
           
                 if(imin>0){
                        imin=i-1;
                      //   std::cout<<"   imin "<<imin<<std::endl;
                        Determine(i-1,j);
                         }
               
                }
             return;
      

        }


int main()
{

 
   for(int i=0; i<N; ++i){
      for(int j=0; j<N; ++j){
   	 Array[i][j]=0;
        }
      
    }
 Array[1][1]=1;
 //Array[1][2]=1;
 Array[3][2]=1;
 Array[3][3]=1; 

int quantity=0;     
   for(int i=0; i<N; ++i){
         for(int j=0; j<N; ++j){
                    if(Array[i][j]==1){
                       int imax=i;
                       int imin=i;
                       int jmax=j;
                       int jmin=j;
                       Determine(i,j);
                        int AreaIJ=(jmax-jmin+1)*(imax-imin+1);
                         std::cout<<" AreaIJ  "<<AreaIJ<<std::endl;
                        if( Area==AreaIJ){
                            quantity++;
                           
                             }
                       }
                  
                   }         
         }     
std::cout<<"The quantity of boats  in the  board is\t"<<quantity<<std::endl;

return 0;
}

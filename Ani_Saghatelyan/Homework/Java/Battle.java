import java.util.Scanner;
class Battle
{
		static int imax=0;
 		static  int imin=0;
 		static  int jmax=0;
 		static  int jmin=0;
 		static  int Area=0;
 		static int N=4;
 		public static int[][] Array = new int[N][N];

		static  void Determine( int i, int j)
		{
       
	          Array[i][j]=2;
       	          Area++;
          
          
		     if(j<N && Array[i][j+1]==1)
        	     {
                	   jmax++;
      		 	   Determine(i, j+1);
              	     }     
              	    if(j>0 && Array[i][j-1]==1)
              	    {
                  	   jmin--;
                  	   Determine(i, j-1); 
               	    } 
             
                   if(i<N && Array[i+1][j]==1)
                   {
                  	imax++;
                  	Determine(i+1, j);
                   }
           
                   if(i>0 && Array[i-1][j]==1)
                   {
                        imin--;
                        Determine(i-1,j);
                   }
				
               }
	public static void enterValue()
	{
		int i, j;
 		for (i = 0; i < N; ++i)  
 		{
 			Scanner reader = new Scanner(System.in);
     			for (j = 0; j < N; ++j) 
     			{
                 	
					System.out.print("Array["+i+"],["+j+"] = ");
        				Array[i][j]= reader.nextInt();
     			}
     
  		}
 

	}

	public static void main(String [] args)
	{
		enterValue();
	        int quantity=0;     
		for(int q=0; q<N; ++q)
		{
        	 for( int t=0; t<N; ++t)
        	{
                    if(Array[q][t]!=0)
                    {
                        imax=q;
	       		imin=t;
                        Area=0;
                        jmax=t;
			jmin=t;
                        
                        Determine(q,t);
                        int AreaIJ=(imax-imin+1)*(jmax-jmin+1);
         		System.out.println("AREAIJ  " + AreaIJ);
                        System.out.println("Area  " + Area);
                        if( Area==AreaIJ  )
                        {
                            quantity++;
                        }
                    }
                  
            }         
        }     
      
    }
}

		
	

		

	



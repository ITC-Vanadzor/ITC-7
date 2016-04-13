import java.util.Scanner;
public class Determination
{ 
		private  int imax;
 		private  int imin;
 		private  int jmax;
 		private int jmin;
 		private  int Area;
 		final private  int n=4;
 		private int[][] Array = new int[n][n];
		
		public Determination()
		{
			imax=0;
			imin=0;
			jmin=0;
			jmax=0;
			Area=0;
		}
		public void setArea(int area)
		{
			Area=area;
		}
		public  void setImax(int newImax)
		{
			imax=newImax;
		}
		public void setImin(int newImin)
		{
		  	imin=newImin;
		}
		public void setJmax(int newJmax)
		{
			jmax=newJmax;
		}
		public void setJmin(int newJmin)
		{
			jmin=newJmin;
		}
		public int getArray(int a,int b)
		{
			return Array[a][b];
		}
		public int  getN()
		{
			return n;
		}
		public int getArea()
		{
			return Area;
		}
		public int getImin()
		{
			return imin;
		}
		public int getImax()
		{
			return imax;
		}
		public int getJmin()
		{
			return jmin;
		}
		public int getJmax()
		{
			return jmax;
		}
		public void Determine( int i, int j)
		 {
       
	         	 Array[i][j]=2;
       	          	 Area++;
          
          
		    if(j<n && Array[i][j+1]==1)
        	    {
                	   jmax++;
      		 	   Determine(i, j+1);
              	    }     
              	    if(j>0 && Array[i][j-1]==1)
              	    {
                  	   jmin--;
                  	   Determine(i, j-1); 
               	    } 
             
                    if(i<n && Array[i+1][j]==1)
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
	 	public void enterValue()
	        {
			int i, j;
 			for (i = 0; i < n; ++i)  
 			{
 				Scanner reader = new Scanner(System.in);
     				for (j = 0; j < n; ++j) 
     				{
                 			System.out.print("Array["+i+"],["+j+"] = ");
        				Array[i][j]= reader.nextInt();
     				}
     			}
 		}	

}

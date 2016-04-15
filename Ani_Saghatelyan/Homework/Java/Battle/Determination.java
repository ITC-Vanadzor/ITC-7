import java.util.Scanner;
public class Determination
{ 
		private  int imax=0;	
 		private  int imin=0;
 		private  int jmax=0;
 		private  int jmin=0;
 		private  int area=0;
 	    protected int n;
	    protected int[][] array;
		
		public void setArea(int newArea)
		{
			area=newArea;
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
			return array[a][b];
		}
		
		public int getArea()
		{
			return area;
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

		public void Determine()
		{
			int quantity=0; 
			for(int q=0; q<n; ++q)
			{
	        	 for( int t=0; t<n; ++t)
	        	{
	                    if(getArray(q,t)!=0)
	                    {
	                        setImax(q);
		       		        setImin(t);
	                        setArea(0);
	                        setJmax(t);
				            setJmin(t);
	                        
	                        CheckShip(q,t);
	                        int areaIJ=(getImax()-getImin()+1)*(getJmax()-getJmin()+1);
	         				System.out.println("AREAIJ  " + areaIJ);
	                        System.out.println("Area  " + getArea());
	                        if( getArea()==areaIJ  )
	                        {
	                            quantity++;
	                        }
	                    }
	                  
	            }         
	        }
   		}
		private void CheckShip( int i, int j)
		{
       

	        array[i][j]=2;
       	    area++;
          
          
		    if(j<n-1 && array[i][j+1]==1)
        	       {
                	   jmax++;
      		 	       CheckShip(i, j+1);
              	    }     
              	    if(j>0 && array[i][j-1]==1)
              	    {
                  	   jmin--;
                  	   CheckShip(i, j-1); 
               	    } 
             
                    if(i<n-1 && array[i+1][j]==1)
                    {
                  	    imax++;
                  	    CheckShip(i+1, j);
                    } 
           
                   if(i>0 && array[i-1][j]==1)
                   {
                        imin--;
                        CheckShip(i-1,j);
                   }
				
        }

     
	

}

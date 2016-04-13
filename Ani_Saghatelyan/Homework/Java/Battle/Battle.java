import java.util.Scanner;
public class Battle
{
	public static void main(String [] args)
	{
              Determination determine=new Determination();	
		determine.enterValue();
	        int quantity=0; 
		int n=determine.getN();
		for(int q=0; q<n; ++q)
		{
        	 for( int t=0; t<n; ++t)
        	{
                    if(determine.getArray(q,t)!=0)
                    {
                        determine.setImax(q);
	       		determine.setImin(t);
                        determine.setArea(0);
                        determine.setJmax(t);
			determine.setJmin(t);
                        
                        determine.Determine(q,t);
                        int AreaIJ=(determine.getImax()-determine.getImin()+1)*(determine.getJmax()-determine.getJmin()+1);
         		System.out.println("AREAIJ  " + AreaIJ);
                        System.out.println("Area  " + determine.getArea());
                        if( determine.getArea()==AreaIJ  )
                        {
                            quantity++;
                        }
                    }
                  
            }         
        }     
      
    }
}

		
	

		

	



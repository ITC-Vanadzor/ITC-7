import java.util.Scanner;


public class battle
{
	public static int[][] qartez = {
		{0, 1, 1, 0},
		{0, 1, 1, 0},
		{0, 0, 0, 0},
		{0, 0, 1, 0}
	};
	public static int meker;
	public static int j_max;
	public static int i_max;
	public static int j_min;

    public static void main(String[] args) 
    {
        BattleStugum battleStugum = new BattleStugum();
    	int naver = 0;
    	for(int i = 0; i < 4; ++i)
    	{
    		for(int j = 0; j < 4; ++j)
    		{
    			if(qartez[i][j] == 1)
    			{
    				j_max = j;
    				j_min = j;
    				i_max = i;
    				battleStugum.stugum(qartez, i, j);
    				if(meker == ((j_max - j_min) + 1) * (i_max + 1))
    				{
    					++naver;
    				}
    			}
    		}
    	}
    	System.out.print("naveri qanak@ = " + naver);
    }
}

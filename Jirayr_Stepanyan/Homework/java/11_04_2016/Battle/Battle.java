import java.util.Scanner;

//Please keep the coding style mentioned during the lesson battle -> Battle
public class Battle
{
// The rules of the incapsulation are not kept
	


    public static void main(String[] args) 
    {
        System.out.println("please input the board size (N x N) ");
        Scanner cin = new Scanner(System.in);
        int boardSize = cin.nextInt();
        Board board = new Board(boardSize);
        board.inputBoard();
        //ValidBattle battle = new ValidBattle()
       /* int meker;
        int j_max;
        int i_max;
        int j_min;
        BattleStugum battleStugum = new BattleStugum();
    	int naver = 0;*/
// Please provide an opportunity to input the qartez and also avoid the usage of har coded values such as 4 ...
    	for(int i = 0; i < 4; ++i)
    	{
    		for(int j = 0; j < 4; ++j)
    		{
    			if(qartez[i][j] == 1)
    			{
    				j_max = j;
    				j_min = j;
    				i_max = i;
    				battleStugum.stugum(Qartez.qartez, i, j, j_max, j_min, i_max);
    				if(meker == ((j_max - j_min) + 1) * (i_max + 1))
    				{
    					++naver;
    				}
    			}
    		}
    	}
    	System.out.print("naveri qanak@ = " + naver);
    }
}:

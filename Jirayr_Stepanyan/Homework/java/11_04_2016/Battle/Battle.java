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
        ValidBattle battle = new ValidBattle(0, 0, 0, 0, 0);
        battle.board = board.getBoard();
        int naver = battle.beforeSheep(boardSize);
    	System.out.print("naveri qanak@ = " + naver);
    }
}

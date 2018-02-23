import java.util.Scanner;

public class Field {
    private int n;
// // The rules of the incapsulation are not kept
    private int[][] board;

    public Field(int size) {
        n = size;
        initialization();
    }

// public -> private
    private void initialization() {
        Scanner in = new Scanner(System.in);
        board = new int[n][n];
        for(int i=0; i < n; ++i) {
            for(int j=0; j < n; ++j) {
                do{
                    System.out.print("board["+i+"]["+j+"]=");
                    board[i][j] = in.nextInt();
                } while( board[i][j] != 0 && board[i][j] != 1);
            }
        }
        for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                System.out.print(board[i][j]);
            }
            System.out.println();
        }
    }
//public -> private
    public int getSize() {
        return n;
    }

    public int[][] getBoard() {
        return board;
    }
}

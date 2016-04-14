import java.util.Scanner;

public class Field {
    private int n;
// The rules of the incapsulation are not kept
    public int[][] array;
    public Field(int size) {
        n = size;
        initialization();
    }
// public -> private
    public void initialization() {
        Scanner in = new Scanner(System.in);
        array = new int[n][n];
        for(int i=0; i < n; ++i) {
            for(int j=0; j < n; ++j) {
                System.out.print("array["+i+"]["+j+"]=");
                array[i][j] = in.nextInt();
            }
        }
        for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                System.out.print(array[i][j]);
            }
            System.out.println();
        }
    }
//public -> private
    public int getSize() {
        return n;
    }
}

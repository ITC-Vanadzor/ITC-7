import java.util.Scanner;

public class Field {
	public int n;
	public int[][] array;
	public Field(int n) {
		this.n = n;
		this.initialization();
	}
	public void initialization() {
		Scanner in = new Scanner(System.in);
		this.array = new int[this.n][this.n];
		for(int i=0; i<this.n; ++i) {
            for(int j=0; j<this.n; ++j) {
                System.out.print("array["+i+"]["+j+"]=");
                this.array[i][j] = in.nextInt();
            }
        }
		for(int i=0; i<n; ++i) {
            for(int j=0; j<n; ++j) {
                System.out.print(array[i][j]);
            }
            System.out.println();
        }
	}
}

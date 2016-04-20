import java.util.Scanner;
public class Field {
	private static int n;
	private static int [][] a;
	public  Field(int n){
		this.n = n;
		initialization();
		makeShips();
	}
	private void initialization(){
               	a = new int[n][n];
               	for(int k = 0;k < n; k++) {
                       	for(int f = 0;f < n;f++) {
                               	a[k][f] = 0;
                       	}
               	}

	}
	 private void makeShips() {
		Scanner in = new Scanner(System.in);
		for(int i=0; i < n; ++i) {
            		for(int j=0; j < n; ++j) {
                		System.out.print("array["+i+"]["+j+"]=");
                		a[i][j] = in.nextInt();
           		}	
       		}
        }
	public static int getFieldsCount() {
		return Field.n;
	}
	public static int getBoard(int i,int j) {
		return Field.a[i][j];
	}

}

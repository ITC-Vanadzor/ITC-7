import java.util.*;

class battle {
	public static int n;
	public static int width = 0;
	public static int length = 0;
	public static int boat = 0;
	public static int count = 0;
	public static void main(String[] args) {
	
		Scanner in = new Scanner(System.in);
		System.out.println("enter size of table");
		n = in.nextInt();
		int[][] array = new int[n][n];
		for(int i=0; i<n; ++i) {
			for(int j=0; j<n; ++j) {
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
	
		for(int i=0; i<n; ++i) {
			for(int j=0; j<n; ++j) {
				if(array[i][j] == 1) {
					width = 1;
					length = 1;
					boat = 1;
					boat_verify(array,i,j);
					if(width * length == boat) {
						++count;
					}
				}
			}
		}
		System.out.println("count of boats = " + count);
	}
	
	public static void boat_verify(int[][] array,int i,int j) {
		array[i][j] = 2;
		if( (j < n-1) && (array[i][j+1] == 1) ) {
			++boat;
			++length;
			boat_verify(array,i,j+1);
		}
		if( (i < n-1) && (array[i+1][j] == 1) ) {
			++boat;
			++width;
			boat_verify(array,i+1,j);
		}
		if( (j > 0) && (array[i][j-1] == 1) ) {
			++boat;
			if(array[i-1][j-1] != 2) {
				++length;
			}
			boat_verify(array,i,j-1);
		}
		if( (i > 0) && (array[i-1][j] == 1) ) {
			++boat;
			if(array[i-1][j+1] != 2) {
				++width;
			}
			boat_verify(array,i-1,j);
		}
	}
}

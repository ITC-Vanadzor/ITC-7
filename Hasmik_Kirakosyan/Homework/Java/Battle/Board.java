import java.util.Scanner;

public class Board {
	public int[][] a;
	private int result = 0;
	private int count = 0, bufForCount;
	private int area, bufForArea;
	private int height, width, top, buttom, left, right ;
	private int jmax, imax, imin, jmin;

	public Board(int sizeOfBoard) {
		a = new int[sizeOfBoard][sizeOfBoard];
	}
	void inputBoardUnits(int n) {
		Scanner in= new Scanner(System.in);
		for (int i = 0; i < n; ++i)  {
			for (int j = 0; j < n; ++j) {
				System.out.print("\n a["+i+"],["+j+"] = ");
				a[i][j] = in.nextInt();;
			}
		}
	}
	private void setAroundUnits (int i, int j) {
		//check buttom, top, left, right
		top    = (i <= 0)? 0:a[i-1][j];
		buttom = (i >= a.length-1)? 0:a[i+1][j];
		left    = (j <= 0)? 0:a[i][j-1];
		right   = (j >= a.length-1)? 0:a[i][j+1];
	} 

	private void setMaxij(int i,int j) {
		imax = (i >= imax)? i:imax;
		jmax = (j >= jmax)? j:jmax;

	}

	private void setMinCoord (int i, int j) {
		// change minimum coordinates if it is needed
		if (count  == 1) { 
			imin = i; 
			jmin = j;  																																							      }
	}

	private void countArea () {
		//count area
		width  = (jmax - jmin)+1;
		height = (imax - imin)+1; 
		area   = width * height;

	}

	private void checkAroundUnits (int i, int j) {
		if (j>=0 && left == 1) check(i, j-1);
		if (i>=0 && top == 1) check(i-1, j);
		if (i<a.length && buttom == 1) check(i+1, j); 
		if (j<a.length && right == 1) check(i, j+1); 
	}

	private void clearMaxij() {
		imax  = 0;
		jmax  = 0;    
	}

	private void setTmpArea() {
		bufForArea = area;
	}
	private void setTmpCount() {
		bufForCount = count;
	}

	public void check(int i, int j) {

		jmax = j;
		imax = i;
		if (a[i][j] == 1) {
			a[i][j] = 2;
			setAroundUnits(i, j);
			setMaxij(i, j);				
			count++;
			setMinCoord(i, j);
			countArea();

			if ((top   != 1) && (buttom != 1) && (left   != 1) &&	(right  != 1))  {                               
				setTmpArea();
				setTmpCount(); 
				count = 0;
				area  = 0;
				int bufImax = imax;
				int bufJmax = jmax;
				clearMaxij();
				System.out.println("bufForCount : "+bufForCount);
				System.out.println("bufForArea  : "+bufForArea);	  
				if (bufForCount == bufForArea) {
					result++;                                                                                                              								 return;
				}
				System.out.println("There is a false ship in this area [" + imin + ", " + jmin + "] - ["+bufImax+ ", "+ bufJmax+"]");

			} 
			else  checkAroundUnits(i, j);			 										  

		}
	}

	public void checkUnits() {
		for (int i = 0; i < a.length; ++i) 
			for (int j = 0; j < a.length; ++j) {
				if (a[i][j] == 1) {
					check (i, j);   
				}
			}    

	}
	public int getResult() {
		return result;
	}
}

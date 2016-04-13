import java.util.Scanner;

public class Board {
		  public int[][] a = new int[5][5];
		  private int result = 0;
		  private int count = 0, bufForCount;
		  private int area, bufForArea;
		  private int height, width, top, buttom, left, right ;
		  private int jmax, imax, imin, jmin;

		  void inputBoardUnits(int n) {
					 int j;
					 Scanner in= new Scanner(System.in);
					 for (int i = 0; i < n; ++i)  {
								for (j = 0; j < n; ++j) {
										  System.out.print("\n a["+i+"],["+j+"] = ");
										  a[i][j] = in.nextInt();;
								}
					 }
		 }
		  private void setAroundUnits (int i, int j) {
					 //check buttom, top, left, right
					 top    = (i <= 0)? 0:a[i-1][j];
					 buttom = (i >= 4)? 0:a[i+1][j];
					 left    = (j <= 0)? 0:a[i][j-1];
					 right   = (j >= 4)? 0:a[i][j+1];
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
					 width = (jmax - jmin)+1;
					 height= (imax - imin)+1; 
					 area  = width * height;

		  }

		  private void checkAroundUnits (int i, int j) {
					 if ((j>=0) && (left == 1))     check(a, i, j-1);

					 if ((i>=0) && (top == 1))      check(a, i-1, j);

					 if ((i<=4) && (buttom == 1))   check(a, i+1, j); 

					 if ((j<=4) && (right == 1))    check(a, i, j+1); 

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

		  public void check(int a[][], int i, int j) {

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
										  if (bufForCount == bufForArea) {
													 result++;                                                                                                              								 return;
										  }
										  System.out.println("There is a false ship in this area [" + imin + ", " + jmin + "] - ["+bufImax+ ", "+ bufJmax+"]");

								} 
								else  checkAroundUnits(i, j);			 										  

					 }
		  }

		  public void checkUnits() {
					 int j;
					 for (int i = 0; i < 5; ++i) 
								for (j = 0; j < 5; ++j) {
										  if (a[i][j] == 1) {
													 check (a, i, j);   
										  }
								}    

		  }
		  public int getResult() {
					 return result;
		  }
}

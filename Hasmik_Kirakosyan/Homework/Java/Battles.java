import java.util.Scanner;

class Battles {

  public static int[][] a = new int[5][5];
  public static int result = 0;
  public static final int n = 5;
  static int count, bufForCount;
  static int area, bufForArea;
  static int height, width, top, buttom, left, right ;
  static int jmax, imax, imin, jmin;
  static void check(int a[][], int i, int j) {

       jmax = j;
		 imax = i;
		 if (a[i][j] == 1) {
		 	a[i][j] = 2;

		   //check buttom, top, left, right
		   top    = (i <= 0)? 0:a[i-1][j];
			buttom = (i >= 4)? 0:a[i+1][j];
			left    = (j <= 0)? 0:a[i][j-1];
			right   = (j >= 4)? 0:a[i][j+1];

			imax = (i >= imax)? i:imax;
			jmax = (j >= jmax)? j:jmax;
			count++;
												               
			// change minimum coordinates if there is need
			if (count  == 1) { 
			           imin = i; 
			           jmin = j;  																																							      }
			// count area
			width = (jmax - jmin)+1;
			height= (imax - imin)+1; 
			area  = width * height;


			if ((top  != 1)  && 
			   (buttom != 1) && 
			   (left   != 1) &&
			   (right  != 1)) {                               
						  bufForArea = area;
						  bufForCount = count; 
						  count = 0;
   					  area  = 0;
						  int buf_imax = imax;
	   				  int buf_jmax = jmax;   
						  imax  = 0;
						  jmax  = 0;    

						  if (bufForCount == bufForArea) {
									 result++;                                                                                                              								 return;
						  }
						  System.out.println("There is a false ship in this area [" + imin + ", " + jmin + "] - ["+buf_imax+ ", "+ buf_jmax+"]");

			} 
			else {                      
					  if ((j>=0) && (left == 1))     check(a, i, j-1);

					  if ((i>=0) && (top == 1))      check(a, i-1, j);

					  if ((i<=4) && (buttom == 1))   check(a, i+1, j); 

					  if ((j<=4) && (right == 1))    check(a, i, j+1); 

			}                                       
	 }
}

public static void main (String[] args) {
		  int i, j;
		  Scanner in= new Scanner(System.in);
		  for (i = 0; i < n; ++i)  {
					 for (j = 0; j < n; ++j) {

								System.out.println(" a["+i+"],["+j+"] = ");
								a[i][j] = in.nextInt();;
					 }
		  }

		  for (i = 0; i < n; ++i) 
					 for (j = 0; j < n; ++j) {
								if (a[i][j] == 1) {
										  check (a, i, j);   
								}
					 }    

			   System.out.println("Number of ships is "+result);
} 

}

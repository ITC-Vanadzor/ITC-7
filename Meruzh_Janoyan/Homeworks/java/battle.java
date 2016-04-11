//sea battle
import java.util.*;
import java.io.*;

class battle
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader in = new BufferedReader(
	    new InputStreamReader(System.in));
	    
		System.out.print("N: ");
		int n = Integer.parseInt(in.readLine());
		System.out.print("M: ");
		int m = Integer.parseInt(in.readLine());
		if(n<1 || m<1){
			System.out.println("Incorrect values..");
			return;
		}

		int[][] matrix=new int[n][m];
		for(int i=0;i<n;++i)
			for(int j=0;j<n;++j){
				System.out.print("matrix["+i+"]"+"["+j+"]: ");
				matrix[i][j]= Integer.parseInt(in.readLine());
			}

		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				System.out.print(matrix[i][j]+"  ");
			}
			System.out.println();
		}


		int counter=0;
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				if(matrix[i][j]==1){
					int n1=i;
					int m1=j;
					int n2=i;
					int m2=j;
					while( m2<m && matrix[n1][m2]!=0){
						++m2;
					}
					--m2;
					while(n2<n && matrix[n2][m2]!=0){
						++n2;
					}
					--n2;

					counter+=detect(matrix,n-1,m-1,n1,m1,n2,m2);
				}				
			}
		}

		System.out.println("Count: "+counter);





	}

	public static int detect(int[][] matrix,int n, int m, int n1,int m1,int n2,int m2){

		for(int i=n1;i<=n2;++i){
			for(int j=m1;j<=m2;++j){
				if(matrix[i][j]==0){
					return 0;
				}
			}
		}
		//up
		if(n1!=0){
			for (int i=m1;i<=m2;++i){
				if(matrix[n1-1][i]==1){
					return 0;
				}
			}
		}

		//down
		if(n2!=n){
			for (int i=m1;i<=m2;++i){
				if(matrix[n2+1][i]==1){
					return 0;
				}
			}
		}

		//left
		if(m1!=0){
			for (int i=n1;i<=n2;++i){
				if(matrix[i][m1-1]==1){
					return 0;
				}
			}
		}

		//left
		if(m2!=m){
			for (int i=n1;i<=n2;++i){
				if(matrix[i][m2+1]==1){
					return 0;
				}
			}
		}

		return 1;

		}

}


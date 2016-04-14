import java.util.Scanner;

class SeaBattle{
	private int n;
	private int m;
	private int[][] matrix;

	public boolean input(){

		Scanner in = new Scanner(System.in);
	    
		System.out.print("N: ");
		this.n =  in.nextInt();
		
		System.out.print("M: ");
		this.m = in.nextInt();
		
		if(n<1 || m<1){
			System.out.println("Incorrect values..");
			return false;
		}

		this.matrix=new int[this.n][this.m];

		for(int i=0;i<this.n;++i)
			for(int j=0;j<this.m;++j){
				System.out.print("matrix["+i+"]"+"["+j+"]: ");
				this.matrix[i][j]= in.nextInt();
			}

		return true;
	}

	public void print(){
		for(int i=0;i<this.n;++i){
			for(int j=0;j<this.m;++j){
				System.out.print(this.matrix[i][j]+"  ");
			}
			System.out.println();
		}
	}

	public int count(){
		int counter=0;
		for(int i=0;i<this.n;++i){
			for(int j=0;j<this.m;++j){
				if(this.matrix[i][j]==1){
					int n1=i;
					int m1=j;
					int n2=i;
					int m2=j;
					while( m2<this.m && this.matrix[n1][m2]!=0){
						++m2;
					}
					--m2;
					while(n2<this.n && this.matrix[n2][m2]!=0){
						++n2;
					}
					--n2;

					counter+=detect(n1,m1,n2,m2);
				}				
			}
		}
		return counter;
	}

// public -> private	

	public  int detect(int n1,int m1,int n2,int m2){
		
		if(!miniDetect(n1,m1,n2,m2)) return 0;
		//up
		if(n1!=0 && miniDetect(n1-1,m1,n1-1,m2)) return 0;
		//down
		if(n2!=(this.n-1) && miniDetect(n2+1,m1,n2+1,m2)) return 0;
		//left
		if(m1!=0 && miniDetect(n1,m1-1,n2,m1-1)) return 0;
		//right
		if(m2!=(this.m-1) && miniDetect(n1,m2+1,n2,m2+1)) return 0;
		
		return 1;
		}

		private  boolean miniDetect(int n1,int m1,int n2,int m2){
			
			for(int i=n1;i<=n2;++i){
				for(int j=m1;j<=m2;++j){
				if(this.matrix[i][j]==0){
					return false;
					}
				}
			}
			return true;
		}
}


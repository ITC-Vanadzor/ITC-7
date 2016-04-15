class Field {
//The rules of the incapsulation are not kept
// N->n :)
	public int N;
	public int [][] a;
	public  Field(int N){
		this.N = N;
		initializacion();
	}
// public -> private
	public static void initializacion(){
               	a = new int[N][N];
               	for(int k = 0;k < N; k++) {
                       	for(int f = 0;f < N;f++) {
                               	a[k][f] = 0;
                       	}
               	}

	}
}

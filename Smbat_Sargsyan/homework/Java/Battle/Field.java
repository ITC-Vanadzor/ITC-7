class Field {
	public static int N;
	public static int [][] a;
	public  Field(int N){
		this.N = N;
		initializacion();
	}
	public static void initializacion(){
               	a = new int[N][N];
               	for(int k = 0;k < N; k++) {
                       	for(int f = 0;f < N;f++) {
                               	a[k][f] = 0;
                       	}
               	}

	}
}

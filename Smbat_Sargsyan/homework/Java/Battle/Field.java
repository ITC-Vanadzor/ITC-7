class Field {
//The rules of the incapsulation are not kept
// N->n :)
	public int N;
	public int [][] a;
	public  Field(int N){
		this.N = N;
		initializacion();
	}
	public void initializacion(){
               	this.a = new int[this.N][this.N];
               	for(int k = 0;k < this.N; k++) {
                       	for(int f = 0;f < this.N;f++) {
                               	a[k][f] = 0;
                       	}
               	}

	}
}

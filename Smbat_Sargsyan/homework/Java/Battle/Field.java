class Field {
//The rules of the incapsulation are not kept
// n->n :)
	private int n;
	private static int [][] a;
	public  Field(int n,Ship ship){
		this.n = n;
		initializacion();
		makeShips(this);
	}
	private void initializacion(){
               	a = new int[n][n];
               	for(int k = 0;k < n; k++) {
                       	for(int f = 0;f < n;f++) {
                               	a[k][f] = 0;
                       	}
               	}

	}
	 private void makeShips(Field field) {
                field.a[1][2] = 1;
                field.a[1][3] = 1;
                field.a[4][4] = 1;
                field.a[4][5] = 1;
                field.a[5][4] = 1;
                field.a[5][5] = 1;
        }

}

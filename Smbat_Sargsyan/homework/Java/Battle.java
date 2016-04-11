public class Battle {
	public static void main(String [] args){
		int vandak = 10;
		Field field = new Field(vandak);
		//custom initializacion ships in the battle field 
		field.a[1][2] = 1;
		field.a[1][3] = 1;
		field.a[4][4] = 1;
		field.a[4][5] = 1;
		field.a[5][4] = 1;
		field.a[5][5] = 1;	
		
		Ships ship = new Ships();
		System.out.println("count of boats is  " + ship.countShips(field));
		ship.print(field);
		
	}
	public  static class Ships {
		int count;
		public Ships() {
			this.count = 0;	
		}
		public int countShips(Field field){
			if(field.a[0][0]==1) {
                        ++this.count;
               		}
               		int i = 0;
                	int j = 1;
                	while(i < field.N){
                        	while(j < field.N){
                                	if(field.a[i][j]==1) {
                                        	boolean LeftOk = true;
                                        	boolean UpOk = true;
                                        	if((j!=0) && (field.a[i][j-1]==1)){
                                                	LeftOk = false;
                                        	}
                                        	if((i!=0) && (field.a[i-1][j]==1)){
                                                	UpOk = false;
                                        	}
                                        	if(LeftOk && UpOk){
                                                	++this.count;
                                        	}
                                	}
                                	++j;
                       		}
                        	++i;
                        	j=0;
                	}
			return count;
		}
		public void print(Field field) {
			for(int g = 0;g < field.N;g++) {
                        	System.out.println();
                        	for(int l = 0;l < field.N;l++) {
                                	System.out.print(field.a[g][l]+ " ");
                       		}
               		}

		}
				
	}
	public static class Field {
		int N;
		int [][] a;
		public  Field(int N){
			this.N = N;
			this.initializacion();
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
}

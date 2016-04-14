class Ships {
	private int count;
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
// The name of the function does not describe its functionality
		public void print(Field field) {
			for(int g = 0;g < field.N;g++) {
                        	System.out.println();
                        	for(int l = 0;l < field.N;l++) {
                                	System.out.print(field.a[g][l]+ " ");
                       		}
               		}

		}
				
}

class Ships {
	private int count;
	public Ships() {
		this.count = 0;	
	}
	public int countShips(){
		if(Field.a[0][0]==1) {
                        ++this.count;
               	}
               	int i = 0;
                int j = 1;
                while(i < Field.N){
                        while(j < Field.N){
                               	if(Field.a[i][j]==1) {
                                 	boolean LeftOk = true;
                                       	boolean UpOk = true;
                                	if((j!=0) && (Field.a[i][j-1]==1)){
                                        	LeftOk = false;
                                	}
                                	if((i!=0) && (Field.a[i-1][j]==1)){
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
		public void print() {
			for(int g = 0;g < Field.N;g++) {
                        	System.out.println();
                        	for(int l = 0;l < Field.N;l++) {
                                	System.out.print(Field.a[g][l]+ " ");
                       		}
               		}

		}
				
}

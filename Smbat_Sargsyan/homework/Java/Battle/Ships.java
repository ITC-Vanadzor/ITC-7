public class Ships {
	private int count;
	public Ships() {
		this.count = 0;	
	}
	public int countShips(){
		if(Field.getBoard(0,0)==1) {
                        ++this.count;
               	}
               	int i = 0;
                int j = 1;
                while(i < Field.getFieldsCount()){
                        while(j < Field.getFieldsCount()){
                               	if(Field.getBoard(i,j)==1) {
                                 	boolean LeftOk = true;
                                       	boolean UpOk = true;
                                	if((j!=0) && (Field.getBoard(i,j-1)==1)){
                                        	LeftOk = false;
                                	}
                                	if((i!=0) && (Field.getBoard(i-1,j)==1)){
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
		public void printSeaBattleFields(Field field) {
			for(int g = 0;g < Field.getFieldsCount();g++) {
                        	System.out.println();
                        	for(int l = 0;l < Field.getFieldsCount();l++) {
                                	System.out.print(Field.getBoard(g,l)+ " ");
                       		}
               		}

		}
				
}

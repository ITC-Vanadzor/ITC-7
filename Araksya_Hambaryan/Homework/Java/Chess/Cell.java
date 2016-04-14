public class Cell {
    int row;
    int col;
    
   /* public Cell (int col,int row) {
	    this.col = col;	
	    this.row = row;
    }*/    
    
    public Cell (String position) {
        ParsingColRow pos = new ParsingColRow(position);
	    this.col = pos.col;	
	    this.row = pos.row;
    }  
}

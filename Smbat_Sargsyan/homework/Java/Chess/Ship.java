public class Ship extends Figure implements ChessInterface {
	public boolean isStepValid(Position finish) {
		int maxI = Math.max(this.start.i,finish.i);
		int minI = Math.min(this.start.i,finish.i);
		int maxJ = Math.max(this.start.j,finish.j);
		int minJ = Math.min(this.start.j,finish.j);

	
		if(Border.getFigure(finish.i,finish.j) != null && this.color == Border.getFigure(finish.i,finish.j).color) {
			return false;
		}
		
		
		if((this.start.i != finish.i) && (this.start.j != finish.j)) {
			return false;
		}
		if(this.start.i == finish.i ) {
			for(int k=minJ;k<maxJ;k++) {
				if(Border.getFigure(this.start.i,k) != null) {
					return false;
				}
				
			}		
		}
	    if(this.start.j == finish.j) {
			for(int k=minI;k<maxI;k++) {
				if(Border.getFigure(k,this.start.j) != null) {
					return false;
				}
				
			}		
		}
	return true;
	}
	public Ship(char color,Position start) {
		this.color = color;
		this.start = start;
	}
	
}

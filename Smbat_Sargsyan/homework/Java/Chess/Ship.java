public class Ship extends Figure {
	public boolean step(Position finish) {
		int maxI = Math.max(this.start.i,finish.i);
		int minI = Math.min(this.start.i,finish.i);
		int maxJ = Math.max(this.start.j,finish.j);
		int minJ = Math.min(this.start.j,finish.j);

	
		if(Border.border[finish.i][finish.j] != null && this.color == Border.border[finish.i][finish.j].color) {
			return false;
		}
		
		
		if((this.start.i != finish.i) && (this.start.j != finish.j)) {
			return false;
		}
		if(this.start.i == finish.i ) {
			for(int k=minJ;k<maxJ;k++) {
				if(Border.border[this.start.i][k] != null && this.color == Border.border[this.start.i][k].color) {
					return false;
				}
				
			}		
		}
	    if(this.start.j == finish.j) {
			for(int k=minI;k<maxI;k++) {
				if(Border.border[k][this.start.j] != null && this.color == Border.border[k][this.start.j].color) {
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

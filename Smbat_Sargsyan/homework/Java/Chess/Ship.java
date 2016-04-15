public class Ship extends Figure {
	public boolean step(Position start,Position finish) {
		int maxI = Math.max(this.start.i,finish.i);
		int minI = Math.min(this.start.i,finish.i);
		int maxJ = Math.max(this.start.j,finish.j);
		int minJ = Math.min(this.start.j,finish.j);

	
		if(this.color == Border.border[finish.i][finish.j].color) {
			return false;
		}
		
		
		if((this.start.i != finish.i) && (this.start.j != finish.j)) {
			return false;
		}
		if(this.start.i == finish.i ) {
			for(int k=minJ;k<maxJ;k++) {
				if(Border.border[this.start.i][k+1] != null && this.color == Border.getColor(finish)) {
					return false;
				}
				
			}		
		}
	    if(this.start.j == finish.j && this.color == Border.getColor(finish)) {
			for(int k=minI;k<maxI;k++) {
				if(Border.border[k][this.start.j] != null) {
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

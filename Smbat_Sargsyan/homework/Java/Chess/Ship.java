public class Ship extends Figure {
	public Position start;
	public String color;
	public Position finish;
	public boolean step(Position start,Position finish) {
		
		if((this.start.i != finish.i) && (this.start.j != finish.j)) {
			return false;
		}
		if(this.start.i == finish.i) {
			for(int k=this.start.j;k<=finish.j;k++) {
				if(Border.border[this.start.i][k] != null && this.color == Border.border[this.start.i][k].color ) {
					return false;
				}
				
			}		
		}
	    if(this.start.j == finish.j) {
			for(int k=this.start.i;k<=finish.i;k++) {
				if((Border.border[k][this.start.j] != null) && (this.color == Border.border[k][this.start.j].color )) {
					return false;
				}
				
			}		
		}
	return true;
	}
	public Ship(Position start,Position finish) {
		this.start = start;
		this.finish =finish;
	}
	
	public Ship(String color,Position start) {
		this.start = start;
		this.color = color;
	}
	
}

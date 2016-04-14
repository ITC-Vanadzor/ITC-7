public class Ship extends Figure implements ChessInterface {
	public Position start;
	public String color;
	public Position finish;
	public boolean step(Position start,Position finish,Border chessBorder) {
		
		if((this.start.i != finish.i) && (this.start.j != finish.j)) {
			return false;
		}
		if(this.start.i == finish.i) {
			for(int k=this.start.j;k<=this.finish.j;k++) {
				if(chessBorder.border[this.start.i][k] != null && this.color == chessBorder.border[this.start.i][k].color ) {
					return false;
				}
				
			}		
		}
	    if(this.start.j == finish.j) {
			for(int k=this.start.i;k<=this.finish.i;k++) {
				if((chessBorder.border[k][this.start.j] != null) && (this.color == chessBorder.border[k][this.start.j].color )) {
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

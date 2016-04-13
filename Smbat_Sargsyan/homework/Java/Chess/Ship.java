public class Ship extends Figure implements ChessInterface {
	public Position start;
	public String color;
	public Position finish;
	public boolean step(Position start,Position finish,Border chessBorder) {
		//for(int k = 0;k <)
		if(((this.start.i == finish.i) || (this.start.j == finish.j)) && (this.color != chessBorder.border[this.finish.i][this.finish.j].color)) {
			return true;
		}
		else return false;
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

public class Ship extends Figure implements ChessInterface {
	public boolean isStepValid(Position finish) {
		if(isEmpty(finish.i,finish.j) && !this.isTheSameColor(finish.i,finish.j)) {
			return false;
		}

		if((this.start.i != finish.i) && (this.start.j != finish.j)) {
			return false;
		}
		if(!this.isFigureInLine(finish)){
			return false;
		}
		return true;
	}
	public Ship(char color,Position start) {
		this.color = color;
		this.start = start;
	}
	
}

public class Elephant extends Figure implements ChessInterface {
        public boolean isStepValid(Position finish) {
		if(isEmpty(finish.i,finish.j) && !this.isTheSameColor(finish.i,finish.j)) {
                        return false;
                }

		if(!this.isInDiagonal(finish)) {
			return false;
		}	
                if((Math.abs(this.start.i - finish.i) == Math.abs(this.start.j - finish.j))) {
                        return true;
                }
                else return false;
        }
		
	public Elephant(char color,Position start) {
                this.start = start;
		this.color = color;
        }


}


public class King extends Figure implements ChessInterface{
        public boolean isStepValid(Position finish) {
		if(isEmpty(finish.i,finish.j) && !this.isTheSameColor(finish.i,finish.j)) {
                        return false;
                }
                
                if(this.isTheSamePosition(finish)) {
                        return false;   
                }

		if(Border.getFigure(finish.i,finish.j) != null && this.color == Border.getFigure(finish.i,finish.j).color) {
			return false;
		}
                        if(((this.start.i == finish.i) && (Math.abs(this.start.j - finish.j) == 1)) || ((this.start.j == finish.j) && (Math.abs(this.start.i - finish.i) == 1)) ||((Math.abs(this.start.i - finish.i) == Math.abs(this.start.j - finish.j) && (Math.abs(this.start.i - finish.i) == 1)))) {
                                return true;
                }
                else return false;
        }
	public King(char color,Position start) {
                this.start = start;
		this.color = color;
        }


}


import java.lang.Math;
public class Queen extends Figure implements ChessInterface{
        public boolean isStepValid(Position finish) {
		 if(isEmpty(finish.i,finish.j) && !this.isTheSameColor(finish.i,finish.j)) {
                        return false;
                }

                if(!this.isInDiagonal(finish)) {
                        return false;
                }
		if(!this.isFigureInLine(finish)){
                        return false;
                }
		if((this.start.i == finish.i) || (this.start.j == finish.j) || (Math.abs(this.start.i - finish.i) == Math.abs(this.start.j - finish.j))) {
				return true;
                }
                else return false;
        }
	public Queen(char color,Position start) {
                this.start = start;
		this.color = color;
        }

	
}

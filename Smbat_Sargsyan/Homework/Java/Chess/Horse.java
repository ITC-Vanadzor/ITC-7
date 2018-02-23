import java.lang.Math;
public class Horse extends Figure  implements ChessInterface{
        public boolean isStepValid(Position finish) {
		if(isEmpty(finish.i,finish.j) && !this.isTheSameColor(finish.i,finish.j)) {
                        return false;
                }
                
		if((((Math.abs(this.start.i - finish.i) == 2) && (Math.abs(this.start.j - finish.j) == 1)) || ((Math.abs(this.start.i - finish.i) == 1) && (Math.abs(this.start.j - finish.j) == 2))) && (!isTheSameColor(finish.i,finish.j)))
		{
			return true;
		}
		else return false;
	}
	public Horse(char color,Position start) {
                this.start = start;
		this.color = color;
        }

}


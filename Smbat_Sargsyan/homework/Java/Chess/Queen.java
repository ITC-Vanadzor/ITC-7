import java.lang.Math;
public class Queen extends Figure {
        public boolean step(Position finish) {
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

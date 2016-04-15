import java.lang.Math;
public class Horse extends Figure {
        public boolean step(Position start,Position finish) {
		if((((Math.abs(this.start.i - finish.i) == 2) && (Math.abs(this.start.j - finish.j) == 1)) || ((Math.abs(this.start.i - finish.i) == 1) && (Math.abs(this.start.j - finish.j) == 2))) && (this.color != Border.border[finish.i][finish.j].color))
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


import java.lang.Math;
public class Horse extends Figure {
        public Position start;
        public Position finish;
	public String color;
        public boolean step(Position start,Position finish,Border chessBorder) {
		if((((Math.abs(this.start.i - this.finish.i) == 2) && (Math.abs(this.start.j - this.finish.j) == 1)) || ((Math.abs(this.start.i - this.finish.i) == 1) && (Math.abs(this.start.j - this.finish.j) == 2))) && (this.color != chessBorder.border[this.finish.i][this.finish.j].color))
		{
			return true;
		}
		else return false;
	}
        public Horse(Position start,Position finish) {
                this.start = start;
                this.finish =finish;
        }
	public Horse(String color,Position start) {
                this.start = start;
		this.color = color;
        }

}


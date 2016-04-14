import java.lang.Math;
public class Queen extends Figure {
	public Position start;
        public Position finish;
	public String color;
        public boolean step(Position start,Position finish) {
                        if((this.start.i == this.finish.i) || (this.start.j == this.finish.j) || (Math.abs(this.start.i - this.finish.i) == Math.abs(this.start.j - this.finish.j))) {
				return true;
                }
                else return false;
        }
        public Queen(Position start,Position finish) {
                this.start = start;
                this.finish =finish;
        }
	public Queen(String color,Position start) {
                this.start = start;
        }

	
}

public class Elephant extends Figure {
        public boolean step(Position start,Position finish) {
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


public class King extends Figure {
        public boolean step(Position start,Position finish) {
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


public class King extends Figure {
        public boolean step(Position finish) {
		if(Border.border[finish.i][finish.j] != null && this.color == Border.border[finish.i][finish.j].color) {
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


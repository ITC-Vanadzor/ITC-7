public class King extends Figure {
        public Position start;
        public Position finish;
	public String color;
        public boolean step(Position start,Position finish) {
                        if(((this.start.i == this.finish.i) && (Math.abs(this.start.j - this.finish.j) == 1)) || ((this.start.j == this.finish.j) && (Math.abs(this.start.i - this.finish.i) == 1)) ||((Math.abs(this.start.i - this.finish.i) == Math.abs(this.start.j - this.finish.j) && (Math.abs(this.start.i - this.finish.i) == 1)))) {
                                return true;
                }
                else return false;
        }
        public King(Position start,Position finish) {
                this.start = start;
                this.finish =finish;
        }
	public King(String color,Position start) {
                this.start = start;
		this.color = color;
        }


}


class Elephant extends Figure implements ChessInterface {
        public Position start;
        public Position finish;
	public String color;
        public boolean step(Position start,Position finish,Border [][] chessBorder) {
                        if((Math.abs(this.start.i - this.finish.i) == Math.abs(this.start.j - this.finish.j))) {
                                return true;
                }
                else return false;
        }
        public Elephant(Position start,Position finish) {
                this.start = start;
                this.finish =finish;
        }
	public Elephant(String color,Position start) {
                this.start = start;
		this.color = color;
        }


}


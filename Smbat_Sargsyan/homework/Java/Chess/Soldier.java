class Soldier extends Figure implements ChessInterface {
        public Position start;
        public Position finish;
	public String color;
        public boolean step(Position start,Position finish,Border chessBorder) {
                        if(((this.start.i == this.finish.i + 1) && (this.start.j == this.finish.j)) || ((this.start.i == 2) && (this.finish.i == 4) && (this.start.j == this.finish.j))) {
                                return true;
                }
                else return false;
        }
        public Soldier(Position start,Position finish) {
                this.start = start;
                this.finish =finish;
        }
	public Soldier(String color,Position start) {
                this.start = start;
		this.color = color;
        }

}


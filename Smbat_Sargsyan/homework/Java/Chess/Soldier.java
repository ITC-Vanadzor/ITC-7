public class Soldier extends Figure {
        public boolean step(Position start,Position finish) {
                        if(((this.start.i == finish.i + 1) && (this.start.j == finish.j)) || ((this.start.i == 2) && (finish.i == 4) && (this.start.j == finish.j))) {
                                return true;
                }
                else return false;
        }
	public Soldier(char color,Position start) {
                this.start = start;
		this.color = color;
        }

}


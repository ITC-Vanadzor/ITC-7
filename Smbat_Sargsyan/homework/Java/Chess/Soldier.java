public class Soldier extends Figure {
        public boolean step(Position finish) {
		if(Border.border[finish.i][finish.j] != null && this.color == Border.border[finish.i][finish.j].color) {
			return false;
		}
		if(Border.border[this.start.i+1][this.start.j] != null) {
			if(this.color == Border.border[finish.i][finish.j].color || (this.color == Border.border[this.start.i +1][this.start.j].color))
			return false;
		}
		
                        if(((this.start.i == finish.i - 1) && (this.start.j == finish.j) && this.color != Border.border[finish.i][finish.j].color) || (this.start.i == 1 && finish.i == 3 && this.start.j == finish.j && Border.border[this.start.i+1][this.start.j] == null)) {
                                return true;
                }
                else return false;
        }
	public Soldier(char color,Position start) {
                this.start = start;
		this.color = color;
        }

}


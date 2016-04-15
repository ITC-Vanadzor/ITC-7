public class Soldier extends Figure implements ChessInterface{
        public boolean isStepValid(Position finish) {
		if(Border.getFigure(finish.i,finish.j) != null && this.color == Border.getFigure(finish.i,finish.j).color) {
			return false;
		}
		if(Border.getFigure(this.start.i+1,this.start.j) != null) {
			if(this.color == Border.getFigure(finish.i,finish.j).color || (this.color == Border.getFigure(this.start.i +1,this.start.j).color))
			return false;
		}
		
                        if(((this.start.i == finish.i - 1) && (this.start.j == finish.j) && this.color != Border.getFigure(finish.i,finish.j).color) || (this.start.i == 1 && finish.i == 3 && this.start.j == finish.j && Border.getFigure(this.start.i+1,this.start.j) == null)) {
                                return true;
                }
                else return false;
        }
	public Soldier(char color,Position start) {
                this.start = start;
		this.color = color;
        }

}


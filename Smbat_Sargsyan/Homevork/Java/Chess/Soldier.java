public class Soldier extends Figure implements ChessInterface{
        public boolean isStepValid(Position finish) {
		if(isEmpty(finish.i,finish.j) && !this.isTheSameColor(finish.i,finish.j)) {
                        return false;
                }
                
		if(isEmpty(this.start.i+1,this.start.j)) {
			if(isTheSameColor(finish.i,finish.j) || isTheSameColor(this.start.i+1,this.start.j))
			return false;
		}
		
                        if(((this.start.i == finish.i - 1) && (this.start.j == finish.j) && !isTheSameColor(finish.i,finish.j)) || (this.start.i == 1 && finish.i == 3 && this.start.j == finish.j && !isEmpty(this.start.i+1,this.start.j))) {
                                return true;
                }
                else return false;
        }
	public Soldier(char color,Position start) {
                this.start = start;
		this.color = color;
        }

}


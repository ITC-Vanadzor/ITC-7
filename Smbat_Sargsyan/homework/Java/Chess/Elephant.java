public class Elephant extends Figure implements ChessInterface {
        public boolean isStepValid(Position finish) {
		if( Border.getFigure(finish.i,finish.j) != null && this.color == Border.getFigure(finish.i,finish.j).color) {
			return false;
		}	
		Position tmp = this.start;
		if(finish.i > tmp.i && finish.j > tmp.j) {
			for(int k=tmp.i+1;k<finish.i;k++) {
				for(int h=tmp.j+1;h<finish.j;h++) {
					if(Border.getFigure(k,h) != null) {
						return false;
					}
				}
			}
		}
		if(finish.i < tmp.i && finish.j < tmp.j) {

			for(int o=finish.i+1;o<tmp.i;o++) {
				for(int s=finish.j+1;s<tmp.j;s++) {
					if(Border.getFigure(o,s) != null) {
                                                return false;
                                        }
				}
			}
		}
		if(finish.i > tmp.i && finish.j < tmp.j) {
			for(int l=tmp.i+1;l< finish.i;l++) {
				for(int y=finish.j+1;y<tmp.j;y++) {
					 if(Border.getFigure(l,y) != null) {
                                                return false;
                                        }

				}
			}
		}
		if(finish.i < tmp.i && finish.j > tmp.j) {
                        for(int r=finish.i+1;r< tmp.i;r++) {
                                for(int u=tmp.j+1;u<finish.j;u++) {
                                         if(Border.getFigure(r,u) != null) {
                                                return false;
                                        }

                                }
                        }
                }
	
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


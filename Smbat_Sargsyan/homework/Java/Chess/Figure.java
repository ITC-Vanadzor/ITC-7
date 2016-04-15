public class Figure {
    protected char color;
    protected Position start;
    public boolean isStepValid(Position finish) {
	return true;
    }
    protected boolean isEmpty(int posI,int posJ) {
    	if(Border.getFigure(posI,posJ) != null) {
                        return false;
        }
	else return true;
    }
    protected boolean isTheSameColor(int finishI,int finishJ) {
	if(this.color == Border.getFigure(finishI,finishJ).color) {
                        return true;
        }
	else return false;
    }
    protected boolean isFigureInLine(Position finish) {
	 int maxI = Math.max(this.start.i,finish.i);
         int minI = Math.min(this.start.i,finish.i);
         int maxJ = Math.max(this.start.j,finish.j);      
         int minJ = Math.min(this.start.j,finish.j);

	if(this.start.i == finish.i ) {
                        for(int k=minJ;k<maxJ;k++) {
                                if(Border.getFigure(this.start.i,k) != null) {
                                        return false;
                                }
                          
                        }
                }
        if(this.start.j == finish.j) {
                        for(int k=minI;k<maxI;k++) {
                                if(Border.getFigure(k,this.start.j) != null) {
                                        return false;
                                }

                        }
        }
	return true;

    }
    protected boolean isInDiagonal(Position finish) {
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
		return true;

    }
     
   
}

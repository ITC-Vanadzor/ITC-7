package figure;

import myUtil.*;
import game.*;
import figure.*;

public class Pawn extends King{
	public boolean step(Position to){
		
		if(to.isNull()){
			return false;
		}

		int tmpRow=this.position.getRow()-to.getRow();
		int tmpColumn=this.position.getColumn()-to.getColumn();		
		int delta=Math.abs(tmpRow)-Math.abs(tmpColumn);

		boolean flag=((tmpColumn==0 && Board.isEmpty(to)) || (delta==0 && tmpColumn==1 && 
									 !Board.isEmpty(to) && 
									  Board.getColour(to)!=this.getColour() ));

		return flag;
	}
}
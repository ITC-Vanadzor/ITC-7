package figure;

import myUtil.*;
import game.*;
import figure.*;

public class Knight extends King{
	public boolean step(Position to){
		
		if(to.isNull()){
			return false;
		}

		int tmpRow=this.position.getRow()-to.getRow();
		int tmpColumn=this.position.getColumn()-to.getColumn();		
		int delta=Math.abs(Math.abs(tmpRow)-Math.abs(tmpColumn));

		boolean flag=(delta==2);

		if(!Board.isEmpty(to)){
			return flag && (Board.getColour(to)!=this.getColour());
		}
		return flag;
	}
}
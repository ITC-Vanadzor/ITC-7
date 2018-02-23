package figure;

import myUtil.*;
import game.*;
import figure.*;

public class Rook extends King{
	public boolean step(Position to){
		
		if(to.isNull()){
			return false;
		}

		int tmpRow=this.position.getRow()-to.getRow();
		int tmpColumn=this.position.getColumn()-to.getColumn();		

		boolean flag=(tmpRow==0 || tmpColumn==0);

		if(!Board.isEmpty(to)){
			return flag && (Board.getColour(to)!=this.getColour());
		}
		return flag;
	}
}
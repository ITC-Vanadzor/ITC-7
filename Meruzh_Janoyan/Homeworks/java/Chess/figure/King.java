package figure;

import myUtil.*;
import game.*;
import figure.*;

public class King implements Piece {
	public Position position;

	public King(){
		position=new Position();
	}

	public boolean setPosition(Position pos){
		return this.position.setPosition(pos.getColumn(),pos.getRow());
	}
	public int getRow(){ 
		return this.position.getRow();
	}
	public char getColumn(){ 
		return this.position.getColumn();
	}

	public boolean step(Position to){
		if (Board.isEmpty(to)){
			int deltaX=Math.abs(this.position.getColumn()-to.getColumn());
			int deltaY=Math.abs(this.position.getRow()-to.getRow());
			return deltaX+deltaY<3;
		}
		return false;
	}
}
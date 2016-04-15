package figure;

import myUtil.*;
import game.*;
import figure.*;

public class King implements Piece {
	protected Position position;
	protected boolean colour;

	public King(){
		position=new Position();
	}
	public void setColour(boolean colour){
		this.colour=colour;
	}
	public boolean getColour(){ 
		return this.colour;
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
	public Position getPosition(){ 
		return this.position;
	}

	public boolean step(Position to){
		if (Board.isEmpty(to) && !this.position.isNull()){
			int deltaX=Math.abs(this.position.getColumn()-to.getColumn());
			int deltaY=Math.abs(this.position.getRow()-to.getRow());
			return deltaX+deltaY<3;
		}
		return false;
	}
}
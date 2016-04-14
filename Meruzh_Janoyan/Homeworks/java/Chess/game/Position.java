package game;

import myUtil.*;
import game.*;
import figure.*;

public class Position{
	private char column;
	private int row;
	private Range<Integer> testRow;
	private Range<Character> testColumn;
	
	public Position(){
		this.testRow = new Range(1, 8);
		this.testColumn=new Range('a','f');
		this.row=0;
		this.column=0;
	}

	public boolean setPosition(char c,int r){
		if(this.testColumn.contains(c) && this.testRow.contains(r)){
			this.row=r;
			this.column=c;
			return true;
		}
		this.row=0;
		this.column=0;
		return false;
	}
	public int getRow(){ 
		return this.row;
	}
	public char getColumn(){ 
		return this.column;
	}
	public boolean isNull(){
		return (this.column==0 || this.row==0);
	}
}
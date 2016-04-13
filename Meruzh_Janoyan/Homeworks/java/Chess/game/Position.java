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
	}

	public boolean setPosition(char c,int r){
		if(this.testColumn.contains(c) && this.testRow.contains(r)){
			this.row=r;
			this.column=c;
			return true;
		}
		this.row=1;
		this.column='a';
		return false;
	}

	public int getRow(){ 
		return this.row;
	}
	public char getColumn(){ 
		return this.column;
	}
}
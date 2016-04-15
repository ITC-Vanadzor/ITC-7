package chess.figure;

import chess.Board;
import chess.Piece;
import chess.Position;

public class Rook implements Piece {
		public String color;
		public Rook(String color) {
			this.color = color;
		}
	
		public boolean step(Position start, Position finish, Board board) {
				if( start.x == finish.x || start.y == finish.y) {
						if(start.x == finish.x) {
							for(int i=start.y+1; i <= finish.y; ++i) {
                            	System.out.println(board.board[start.x][i]);
                            	if(board.board[start.x][i] != null) {
                                	return false;
                            	}
                        	}
						} else {
							for(int j=start.x+1; j <= finish.x; ++j) {
                                System.out.println(board.board[j][start.y]);
                                if(board.board[j][start.y] != null) {
                                    return false;
                                }
                            }
						}
						return true;			
				} else {
						return false;
				}
		}
}

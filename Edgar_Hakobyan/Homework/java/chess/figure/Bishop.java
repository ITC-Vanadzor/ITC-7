package chess.figure;

import chess.Board;
import chess.Piece;
import chess.Position;

public class Bishop implements Piece {
		public String color;
		public Bishop(String color) {
				this.color = color;
		}

		public boolean step(Position start, Position finish, Board board) {
				if ( Math.abs(start.x-finish.x) == Math.abs(start.y-finish.y) ) {
						for(int i=start.x+1,j=start.y+1; i <= finish.x; ++i,++j) {
								System.out.println(i+" "+j);
								System.out.println(board.board[3][3]);
								if(board.board[i][j] != null) {
										return false;
								}
						}
						return true;
				} else {
						return false;
				}
		}
}

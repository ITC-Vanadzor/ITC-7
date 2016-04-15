package chess.figure;

import chess.Board;
import chess.Piece;
import chess.Position;

public class King implements Piece{
		public String color;
		public King(String color) {
				this.color = color;
		}

		public boolean step(Position start, Position finish, Board board) {
				if( (Math.abs(start.x-finish.x) + Math.abs(start.y-finish.y)) >0 && (Math.abs(start.x-finish.x) + Math.abs(start.y-finish.y)) < 3 ) {
						return true;
				} else {
						return false;
				}
		}
}

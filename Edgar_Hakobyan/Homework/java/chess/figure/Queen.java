package chess.figure;

import chess.Board;
import chess.Piece;
import chess.Position;

public class Queen implements Piece {
		public String color;
		public Queen(String color) {
				this.color = color;
		}

		public boolean step(Position start, Position finish, Board board) {
				if( start.x == finish.x || start.y == finish.y || ( Math.abs(start.x-finish.x) == Math.abs(start.y-finish.y) )) {
						return true;
				} else {
						return false;
				}
		}
}

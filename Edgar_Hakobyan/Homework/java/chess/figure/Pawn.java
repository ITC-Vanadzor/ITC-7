package chess.figure;

import chess.Board;
import chess.Piece;
import chess.Position;

public class Pawn implements Piece {
		public String color;
		public Pawn(String color) {
				this.color = color;
		}

		public boolean step(Position start, Position finish, Board board) {
				if( start.x == finish.x && start.y > 1 && start.y < 8 ) {
						switch (Math.abs(finish.y-start.y)) {
								case 1: 
										return true;
								case 2:
										if( start.y == 2 || start.y == 7) {
												return true;
										} else {
												return false;
										}
								default:
										return false;
						}
				} else {
						return false;
				}
		}
}

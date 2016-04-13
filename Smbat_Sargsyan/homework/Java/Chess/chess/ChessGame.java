package chess;

import chess.figure.*;

class ChessGame {
	public static void main(String [] args) {
		int l = 2; int h = 2;
		int n = 3; int k = 2;
		Position start = new Position(l,h);
		Position finish  = new Position(n,k);
		Ship ship = new Ship(start,finish);
		Horse horse = new Horse(start,finish);
		Queen queen = new Queen(start,finish);
		Elephant elephant = new Elephant(start,finish);
		King king = new King(start,finish);
		Soldier soldier = new Soldier(start,finish);	
		System.out.println(ship.step(start,finish));
		System.out.println(horse.step(start,finish));
		System.out.println(queen.step(start,finish));
		System.out.println(elephant.step(start,finish));
		System.out.println(king.step(start,finish));
		System.out.println(soldier.step(start,finish));
	}
}

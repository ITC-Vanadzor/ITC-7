package chess;

import chess.figure.*;
import chess.Position;
import chess.Board;

public class Chess {
    public static void main(String[] args) {
        Board board = new Board();

        King kingBlack = new King("black");
        board.setFigure(kingBlack,new Position(3,0));

        Queen queenBlack = new Queen("black");
        board.setFigure(queenBlack,new Position(4,0));

        Rook rookBlack1 = new Rook("black");
        board.setFigure(rookBlack1,new Position(0,0));

        Rook rookBlack2 = new Rook("black");
        board.setFigure(rookBlack1,new Position(7,0));

        Bishop bishopBlack1 = new Bishop("black");
        board.setFigure(bishopBlack1,new Position(2,0));

        Bishop bishopBlack2 = new Bishop("black");
        board.setFigure(bishopBlack2,new Position(5,0));

        Knight knightBlack1 = new Knight("black");
        board.setFigure(knightBlack1,new Position(1,0));	

        Knight knightBlack2 = new Knight("black");
        board.setFigure(knightBlack2,new Position(6,0));

        for( int i=0; i<8; ++i) {
            board.setFigure(new Pawn("black"),new Position(i,1));
        }
/*
        System.out.println("bishop"+bishopBlack.step(new Position(4,4), new Position(7,7), board));
        if(bishopBlack.step(new Position(4,4), new Position(7,7), board)) {
            board.moveFigure(bishopBlack,new Position(4,4), new Position(7,7));
        }

        System.out.println("pown"+pawnBlack.step(new Position(5,5), new Position(5,4), board));
        if(pawnBlack.step(new Position(5,5), new Position(5,4), board)) {
            board.moveFigure(pawnBlack,new Position(5,5), new Position(5,4));
        }
        System.out.println("rook"+rookBlack.step(new Position(5,4), new Position(7,4), board));
        if(rookBlack.step(new Position(5,4), new Position(7,4), board)) {
            board.moveFigure(rookBlack,new Position(5,4), new Position(7,4));
        }

        System.out.println("knight"+knightBlack.step(new Position(7,1), new Position(5,2), board));
        if(knightBlack.step(new Position(7,1), new Position(5,2), board)) {
            board.moveFigure(knightBlack,new Position(7,1), new Position(5,2));
        }

        System.out.println("queen"+queenBlack.step(new Position(4,6), new Position(2,4), board));
        if(queenBlack.step(new Position(4,6), new Position(2,4), board)) {
            board.moveFigure(queenBlack,new Position(4,6), new Position(2,4));
        }
*/
        for(int i=0; i<8; ++i) {
            for(int j=0; j<8; ++j) {
                board.getFigure(new Position(i,j));
            }
        }
    }
}

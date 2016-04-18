package chess;

import chess.figure.*;
import chess.Position;
import chess.Board;

public class Chess {
    public static void main(String[] args) {
        Board board = new Board();

        King kingBlack = new King(board,"black");
        board.setFigure(kingBlack,new Position('E',1));

        Queen queenBlack = new Queen(board,"black");
        board.setFigure(queenBlack,new Position('D',1));

        Rook rookBlack1 = new Rook(board,"black");
        board.setFigure(rookBlack1,new Position('A',1));

        Rook rookBlack2 = new Rook(board,"black");
        board.setFigure(rookBlack1,new Position('H',1));

        Bishop bishopBlack1 = new Bishop(board,"black");
        board.setFigure(bishopBlack1,new Position('C',1));

        Bishop bishopBlack2 = new Bishop(board,"black");
        board.setFigure(bishopBlack2,new Position('F',1));

        Knight knightBlack1 = new Knight(board,"black");
        board.setFigure(knightBlack1,new Position('B',1));	

        Knight knightBlack2 = new Knight(board,"black");
        board.setFigure(knightBlack2,new Position('G',1));

        Pawn pawnBlack = new Pawn(board,"black");    

        for( char i='A'; i<'I'; ++i) {
            board.setFigure(pawnBlack,new Position(i,2));
        }

        King kingWhite = new King(board,"white");
        board.setFigure(kingWhite,new Position('E',8));

        Queen queenWhite = new Queen(board,"white");
        board.setFigure(queenWhite,new Position('D',8));

        Rook rookWhite1 = new Rook(board,"white");
        board.setFigure(rookWhite1,new Position('A',8));

        Rook rookWhite2 = new Rook(board,"white");
        board.setFigure(rookWhite1,new Position('H',8));

        Bishop bishopWhite1 = new Bishop(board,"white");
        board.setFigure(bishopWhite1,new Position('C',8));

        Bishop bishopWhite2 = new Bishop(board,"white");
        board.setFigure(bishopWhite2,new Position('F',8));

        Knight knightWhite1 = new Knight(board,"white");
        board.setFigure(knightWhite1,new Position('B',8));

        Knight knightWhite2 = new Knight(board,"white");
        board.setFigure(knightWhite2,new Position('G',8));

        Pawn pawnWhite = new Pawn(board,"white");

        for( char i='A'; i<'I'; ++i) {
            board.setFigure(pawnWhite,new Position(i,7));
        }



        board.moveFigure(bishopBlack1,new Position('C',1), new Position('D',4));
        board.moveFigure(knightBlack1,new Position('B',1), new Position('B',2));
        board.moveFigure(queenBlack,new Position('D',1), new Position('G',4));
        board.moveFigure(kingBlack,new Position('E',1), new Position('G',4));

        board.prinBoard();
    }
}

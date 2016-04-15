package Chess.Figures;

import Chess.ChessBoard.*;

public class Figure {
    public char color;
    public Cell startPosition;
    public char shorthand;
    
    public Figure (Cell startPosition, char color, char typeForWhite, char typeForBlack) {
        cellIsEmpaty(startPosition);
        this.startPosition = startPosition;
        this.color = color;
        if (color == 'W') {
            shorthand = typeForWhite;
        } else {
            shorthand = typeForBlack;
        }
        Board.setFigureToBoard(this);
    }
    
    public int getStartRow () {
        return startPosition.row;
    }
    
    public int getStartColumn () {
        return startPosition.col;
    }

    // Stugum e Figure stexcelu vandak@ datark e te che
    private void cellIsEmpaty(Cell startPosition) {
        if (Board.getFigure(startPosition) != null) {
            System.out.println("Duplicate position!! Please try again");
            System.exit(0);
        }
    }
}

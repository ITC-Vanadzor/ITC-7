class Ships {
    private int width;
    private int length;
    private int boat;
    private int count;
    private Field field;
    private int[][] board;

    public Ships(Field field1) {
        count = 0;
        field = field1;
    }

    private void boatVerify(int i,int j) {
        board[i][j] = 2;
        if( (j < field.getSize()-1) && (board[i][j+1] == 1) ) {
            ++boat;
            ++length;
            boatVerify(i,j+1);
        }
        if( (i < field.getSize()-1) && (board[i+1][j] == 1) ) {
            ++boat;
            ++width;
            boatVerify(i+1,j);
        }
        if( (j > 0) && (board[i][j-1] == 1) ) {
            ++boat;
            if(board[i-1][j-1] != 2) {
                ++length;
            }
            boatVerify(i,j-1);
        }
        if( (i > 0) && (board[i-1][j] == 1) ) {
            ++boat;
            if(board[i-1][j+1] != 2) {
                ++width;
            }
            boatVerify(i-1, j);
        }
    }

    public int countShips() {
        board = field.getBoard();
        for(int i=0; i<field.getSize(); ++i) {
            for(int j=0; j<field.getSize(); ++j) {
                if(board[i][j] == 1) {
                    width = 1;
                    length = 1;
                    boat = 1;
                    boatVerify(i,j);
                    if(width * length == boat) {
                        ++count;
                    }
                }
            }
        }
        return count;
    }
}

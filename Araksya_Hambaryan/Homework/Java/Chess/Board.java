public class Board {
    public Figure[][] area;
   
    public Board() {
        this.area = new Figure[9][9];
    }
    public void setFigureToBoard(Figure figure){
        int row = figure.getStartRow();
        int col = figure.getStartColumn();
        this.area[row][col] = figure;
        
    }
    
    public void printBoard() {
        System.out.println("  A B C D E F G H");
        StringBuffer output = new StringBuffer("");
        for (int i = 1; i < 9; ++i) {
            output.append(i).append(" ");
            for (int j = 1; j < 9; ++j) {
                if (area[i][j] == null) {
                    output.append("_ ");
                } else {
                    output.append(area[i][j].shorthand).append(" ");
                }
            }
            System.out.println(output);
            output.replace(0, 18, "");
        
        }
    
    }
   
    
}

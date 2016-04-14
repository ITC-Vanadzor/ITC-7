public class Figure {
    char color;
    Cell position;
    char shorthand;
    
    public int getStartRow () {
        return position.row;
    }
    
    public int getStartColumn () {
        return position.col;
    }

}

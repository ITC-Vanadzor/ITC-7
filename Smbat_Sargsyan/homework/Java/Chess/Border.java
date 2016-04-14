public class Border{
    public static Figure [][] border;        
    public Border() {
	border = new Figure[8][8];    
    }
    public static void setPosition(Position start,Figure figure) {
	border[start.i][start.j] = figure;	
    }
    
    
}

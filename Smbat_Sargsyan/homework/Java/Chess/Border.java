public class Border{
	private static Figure [][] border;        
	public Border() {
		border = new Figure[ConstantMembers.CHESS_BORDER][ConstantMembers.CHESS_BORDER];    
	}
	public static void setPosition(Position start,Figure figure) {
		border[start.i][start.j] = figure;	
	}
	public static Figure getFigure(int x,int y) {
		return border[x][y];
	}
	public static char getColor(Position x) {
		if(Border.border[x.i][x.j] != null) {
			return border[x.i][x.j].color;
		}
		return 'X';
	}
	public void printBoard() {
		System.out.println(" A B C D E F G H");
		StringBuffer output = new StringBuffer("");
		for (int i = 0; i < ConstantMembers.CHESS_BORDER; ++i) {
			output.append(i+1).append(" ");
			for (int j = 0; j < ConstantMembers.CHESS_BORDER; ++j) {
				if (border[i][j] == null) {
					output.append("_ ");
				} else {
					output.append(Border.border[i][j].color).append(" ");
				}
			}
			System.out.println(output);
			output.replace(0, 18, "");
		}
	}


}

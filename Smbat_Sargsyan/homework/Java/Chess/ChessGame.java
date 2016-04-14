class ChessGame {
	public static void main(String [] args) {
		System.out.println("OK");
		Border chessBorder = new Border();
		Position finish  = new Position(4,7);
		initializacionWhiteFigures(chessBorder);
		initializacionBlackFigures(chessBorder);
		System.out.println(chessBorder.border[0][0].step(chessBorder.border[0][0].start,finish,chessBorder));
	}
	public static void initializacionWhiteFigures(Border chessBorder) {
		Figure ship1 = new Ship("white",new Position(0,0));
                chessBorder.border[0][0] = ship1;
                Figure ship2 = new Ship("white",new Position(0,7));
                chessBorder.border[0][7] = ship2;
                Figure horse1 = new Horse("white",new Position(0,1));
                chessBorder.border[0][1] = horse1;
                Figure horse2 = new Horse("white",new Position(2,7));
                chessBorder.border[2][7] = horse2;
                Figure elephant1 = new Elephant("white",new Position(5,4));
                chessBorder.border[5][4] = elephant1;
                Figure elephant2 = new Elephant("white",new Position(3,6));
                chessBorder.border[3][6] = ship2;
                Figure king = new King("white",new Position(1,1));
                chessBorder.border[1][1] = king;
                Figure queen = new Queen("white",new Position(5,5));
                chessBorder.border[5][5] = queen;
                Figure soldier1 = new Soldier("white",new Position(3,7));
                chessBorder.border[3][7] = soldier1;
                Figure soldier2 = new Soldier("white",new Position(4,7));
                chessBorder.border[4][7] = soldier2;
                Figure soldier3 = new Soldier("white",new Position(4,2));
                chessBorder.border[4][2] = soldier3;
                Figure soldier4 = new Soldier("white",new Position(3,3));
                chessBorder.border[3][3] = soldier4;
                Figure soldier5 = new Soldier("white",new Position(2,5));
                chessBorder.border[2][5] = soldier5;
                Figure soldier6 = new Soldier("white",new Position(6,6));
                chessBorder.border[6][6] = soldier6;
		Figure soldier7 = new Soldier("white",new Position(6,2));
		chessBorder.border[6][2] = soldier7;
		Figure soldier8 = new Soldier("white",new Position(4,4));
                chessBorder.border[4][4] = soldier8;

	}
	
	public static void initializacionBlackFigures(Border chessBorder) {
                Figure ship1B = new Ship("Black",new Position(5,3));
                chessBorder.border[5][3] = ship1B;
                Figure ship2B = new Ship("Black",new Position(4,6));
                chessBorder.border[4][6] = ship2B;
                Figure horse1B = new Horse("Black",new Position(2,2));
                chessBorder.border[2][2] = horse1B;
                Figure horse2B = new Horse("Black",new Position(3,4));
                chessBorder.border[3][4] = horse2B;
                Figure elephant1B = new Elephant("Black",new Position(6,1));
                chessBorder.border[6][1] = elephant1B;
                Figure elephant2B = new Elephant("Black",new Position(2,0));
                chessBorder.border[2][0] = elephant2B;
                Figure kingB = new King("Black",new Position(7,0));
                chessBorder.border[7][0] = kingB;
                Figure queenB = new Queen("Black",new Position(6,5));
                chessBorder.border[6][5] = queenB;
                Figure soldier1B = new Soldier("Black",new Position(0,3));
                chessBorder.border[0][3] = soldier1B;
                Figure soldier2B = new Soldier("Black",new Position(5,1));
                chessBorder.border[5][1] = soldier2B;
                Figure soldier3B = new Soldier("Black",new Position(6,4));
                chessBorder.border[6][4] = soldier3B;
                Figure soldier4B = new Soldier("Black",new Position(7,6));
                chessBorder.border[7][6] = soldier4B;
                Figure soldier5B = new Soldier("Black",new Position(2,3));
                chessBorder.border[2][3] = soldier5B;
                Figure soldier6B = new Soldier("Black",new Position(4,1));
                chessBorder.border[4][1] = soldier6B;
                Figure soldier7B = new Soldier("Black",new Position(5,6));
                chessBorder.border[5][6] = soldier7B;
                Figure soldier8B = new Soldier("Black",new Position(5,2));
                chessBorder.border[5][2] = soldier8B;

        }

}
	


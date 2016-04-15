public class ChessGame {
	public static void main(String [] args) {
		Border board = new Border();
		Position finish  = new Position(2,2);
		initializationWhiteFigures();
		initializationBlackFigures();
		System.out.println(Border.getFigure(1,5).isStepValid(finish));
		System.out.println(Border.getFigure(0,1).isStepValid(finish));
		System.out.println(Border.getFigure(0,0).isStepValid(finish));
		board.printBoard();
	}
	private static void initializationWhiteFigures() {
		Position pos1 = new Position(0,0);
		Figure ship1 = new Ship(ConstantMembers.WHITE,pos1);
		Border.setPosition(pos1,ship1);
		Position pos2 = new Position(0,7);
                Figure ship2 = new Ship(ConstantMembers.WHITE,pos2);
                Border.setPosition(pos2,ship2);
		Position pos3 = new Position(0,1);
                Figure horse1 = new Horse(ConstantMembers.WHITE,pos3);
                Border.setPosition(pos3,horse1);
		Position pos4 = new Position(2,7);
                Figure horse2 = new Horse(ConstantMembers.WHITE,pos4);
                Border.setPosition(pos4,horse2);
		Position pos5 = new Position(5,4);
                Figure elephant1 = new Elephant(ConstantMembers.WHITE,pos5);
                Border.setPosition(pos5,elephant1);
		Position pos6 = new Position(3,6);
                Figure elephant2 = new Elephant(ConstantMembers.WHITE,pos6);
                Border.setPosition(pos6,ship2);
		Position pos7 = new Position(1,1);
                Figure king = new King(ConstantMembers.WHITE,pos7);
                Border.setPosition(pos7,king);
		Position pos8 = new Position(2,5);
                Figure queen = new Queen(ConstantMembers.BLACK,pos8);
                Border.setPosition(pos8,queen);
		Position pos9 = new Position(3,7);
                Figure soldier1 = new Soldier(ConstantMembers.WHITE,pos9);
                Border.setPosition(pos9,soldier1);
		Position pos10 = new Position(4,7);
                Figure soldier2 = new Soldier(ConstantMembers.WHITE,pos10);
                Border.setPosition(pos10,soldier2);
		Position pos11 = new Position(4,2);
                Figure soldier3 = new Soldier(ConstantMembers.WHITE,pos11);
                Border.setPosition(pos11,soldier3);
		Position pos12 = new Position(3,3);
                Figure soldier4 = new Soldier(ConstantMembers.WHITE,pos12);
                Border.setPosition(pos12,soldier4);
		Position pos13 = new Position(1,5);
                Figure soldier5 = new Soldier(ConstantMembers.WHITE,pos13);
                Border.setPosition(pos13,soldier5);
		Position pos14 = new Position(1,3);
                Figure soldier6 = new Soldier(ConstantMembers.BLACK,pos14);
                Border.setPosition(pos14,soldier6);
		Position pos15 = new Position(6,2);
		Figure soldier7 = new Soldier(ConstantMembers.WHITE,pos15);
		Border.setPosition(pos15,soldier7);
		Position pos16 = new Position(4,4);
		Figure soldier8 = new Soldier(ConstantMembers.WHITE,pos16);
                Border.setPosition(pos16,soldier8);

	}
	
	private static void initializationBlackFigures() {
		Position pos17 = new Position(5,3);
                Figure ship1B = new Ship(ConstantMembers.BLACK,pos17);
                Border.setPosition(pos17,ship1B);
		Position pos18 = new Position(3,5);
                Figure ship2B = new Ship(ConstantMembers.BLACK,pos18);
                Border.setPosition(pos18,ship2B);
		Position pos19 = new Position(2,2);
                Figure horse1B = new Horse(ConstantMembers.BLACK,pos19);
                Border.setPosition(pos19,horse1B);
		Position pos20 = new Position(3,4);
                Figure horse2B = new Horse(ConstantMembers.BLACK,pos20);
                Border.setPosition(pos20,horse2B);
		Position pos21 = new Position(6,1);
                Figure elephant1B = new Elephant(ConstantMembers.BLACK,pos21);
                Border.setPosition(pos21,elephant1B);
		Position pos22 = new Position(2,0);
                Figure elephant2B = new Elephant(ConstantMembers.BLACK,pos22);
                Border.setPosition(pos22,elephant2B);
		Position pos23 = new Position(7,0);
                Figure kingB = new King(ConstantMembers.BLACK,pos23);
                Border.setPosition(pos23,kingB);
		Position pos24 = new Position(6,5);
                Figure queenB = new Queen(ConstantMembers.BLACK,pos24);
                Border.setPosition(pos24,queenB);
		Position pos25 = new Position(0,3);
                Figure soldier1B = new Soldier(ConstantMembers.BLACK,pos25);
                Border.setPosition(pos25,soldier1B);
		Position pos26 = new Position(5,1);
                Figure soldier2B = new Soldier(ConstantMembers.BLACK,pos26);
                Border.setPosition(pos26,soldier2B);
		Position pos27 = new Position(6,4);
                Figure soldier3B = new Soldier(ConstantMembers.BLACK,pos27);
                Border.setPosition(pos27,soldier3B);
		Position pos28 = new Position(7,6);
                Figure soldier4B = new Soldier(ConstantMembers.BLACK,pos28);
                Border.setPosition(pos28,soldier4B);
		Position pos29 = new Position(2,3);
                Figure soldier5B = new Soldier(ConstantMembers.BLACK,pos29);
                Border.setPosition(pos29,soldier5B);
		Position pos30 = new Position(4,1);
                Figure soldier6B = new Soldier(ConstantMembers.BLACK,pos30);
                Border.setPosition(pos30,soldier6B);
		Position pos31 = new Position(5,6);
                Figure soldier7B = new Soldier(ConstantMembers.BLACK,pos31);
                Border.setPosition(pos31,soldier7B);
		Position pos32 = new Position(5,2);
                Figure soldier8B = new Soldier(ConstantMembers.BLACK,pos32);
                Border.setPosition(pos32,soldier8B);

        }
}
	


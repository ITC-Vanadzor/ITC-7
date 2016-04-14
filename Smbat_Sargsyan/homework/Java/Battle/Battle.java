class Battle {
	public static void main(String [] args){
		int vandak = 10;
		Field field = new Field(vandak);
		makeShips();	
		Ships ship = new Ships();
		System.out.println("count of boats is  " + ship.countShips());
		ship.print();
		
	}
	public static void makeShips() {
		Field.a[1][2] = 1;
                Field.a[1][3] = 1;
                Field.a[4][4] = 1;
                Field.a[4][5] = 1;
                Field.a[5][4] = 1;
                Field.a[5][5] = 1;
	}
}

class Battle {
	public static void main(String [] args){
		int vandak = 10;
		Field field = new Field(vandak);
		makeShips();	
		Ships ship = new Ships();
		System.out.println("count of boats is  " + ship.countShips());
		ship.print();
		
	}
// public - > private. It is more preferable to move this function under Field class.
	public static void makeShips(Field field) {
		field.a[1][2] = 1;
                field.a[1][3] = 1;
                field.a[4][4] = 1;
                field.a[4][5] = 1;
                field.a[5][4] = 1;
                field.a[5][5] = 1;
	}
}

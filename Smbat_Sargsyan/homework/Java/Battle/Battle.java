class Battle {
	public static void main(String [] args){
		int vandak = 10;
		Field field = new Field(vandak);
		//custom initializacion ships in the battle field 
		field.a[1][2] = 1;
		field.a[1][3] = 1;
		field.a[4][4] = 1;
		field.a[4][5] = 1;
		field.a[5][4] = 1;
		field.a[5][5] = 1;	
		
		Ships ship = new Ships();
		System.out.println("count of boats is  " + ship.countShips(field));
		ship.print(field);
		
	}
}

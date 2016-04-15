class Battle {
	public static void main(String [] args){
		int vandak = 10;
		Field field = new Field(vandak);
		//field.makeShips();	
		Ships ship = new Ships();
		System.out.println("count of boats is  " + ship.countShips());
		ship.printSeaBattleFields(field);
		
	}
}

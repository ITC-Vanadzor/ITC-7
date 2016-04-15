public class Battle {
	public static void main(String [] args){
		int cell = 10;
		Field field = new Field(cell);
		Ships ship = new Ships();
		System.out.println("count of boats is  " + ship.countShips());
		ship.printSeaBattleFields(field);
	}
}

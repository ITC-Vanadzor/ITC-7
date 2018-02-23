//sea battle


class Game{
	public static void main (String[] args){
		
		SeaBattle game=new SeaBattle();

		game.input();
		game.print();
		System.out.println("Count is "+game.count());
	}
}
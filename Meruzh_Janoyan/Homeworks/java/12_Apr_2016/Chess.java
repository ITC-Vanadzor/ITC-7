class Chess {
	public static void main(String [] args) {
		Position from=new Position('a',1);
		Position to=new Position('c',3);

		Piece king=new King();
		Piece queen=new Queen();

		System.out.println("King result:"+king.step(from,to));
		System.out.println("Queen result:"+queen.step(from,to));

	}
}
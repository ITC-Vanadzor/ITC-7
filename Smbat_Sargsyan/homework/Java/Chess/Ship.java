class Ship implements ChessInterface {
	public Position start;
	public Position finish;
	public boolean step(Position start,Position finish) {
		if((this.start.i == this.finish.i) || (this.start.j == this.finish.j)) {
			return true;
		}
		else return false;
	}
	public Ship(Position start,Position finish) {
		this.start = start;
		this.finish =finish;
	}	
}

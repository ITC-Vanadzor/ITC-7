class King implements Piece{

	public boolean step(Position s, Position e){
		int x=Math.abs(s.first-e.first);
		int y=Math.abs(s.second-e.second);
		return (x+y<3)?true:false;
	}
}
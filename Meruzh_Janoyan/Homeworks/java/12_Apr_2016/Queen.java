class Queen implements Piece{
	public boolean step(Position s, Position e){
		int delta=Math.abs(s.first-e.first)-Math.abs(s.second-e.second);
		return (s.first==e.first || s.second==e.second || delta==0 )?true:false;
	}
}
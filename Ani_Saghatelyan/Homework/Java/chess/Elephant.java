class Elephant implements Rock
{
	public 	boolean Step(Position start, Position end)
	{
		if(Math.abs(start.getNumber1()-end.getNumber1()) == Math.abs(end.getNumber2()-start.getNumber2()))
		{
			return true;
		}
		return false;
	}
}

class Hourse implements Rock
{
	public boolean Step(Position start, Position end)
	{
		if((Math.abs(start.getNumber2()-end.getNumber2())==1  && Math.abs(start.getNumber1()-end.getNumber1())==2) || ((Math.abs(start.getNumber1()-end.getNumber1())==1  && Math.abs(start.getNumber2()-end.getNumber2())==2)))
		{	
			return true;
	 	}
		return false;
	}
}

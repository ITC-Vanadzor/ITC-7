public class Boat implements Rock
{

	public boolean Step(Position start, Position end)
	{
		if(start.getNumber1()==end.getNumber1() || start.getNumber2()  == end.getNumber2())
		{
			return true;
		}
		return false;		
	}
	
	
}

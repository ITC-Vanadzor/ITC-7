class Position
{
	private int  p1;
	private int  p2;
	public Position(int number1, int number2)
	{
		this.p1=number1;
		this.p2=number2;
	} 
	public  int getNumber2()
	{
	    return p2;
	}
	public int getNumber1()
	{
		return p1;
	}
	public void setNumber2(int number2)
	{
		p2= number2;
	}
	public void setNumber1(int number1)
	{
		p1=number1;
	}
}


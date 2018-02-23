package projectRectangle.entities;

public class Rectangle
{
	private int width;
	private int height;
	
	public Rectangle(int c_width, int c_height)
	{
		this.width = c_width;
		this.height = c_height;
	}
	
	public void setter(int set_width, int set_height)
	{
		this.width = set_width;
		this.height = set_height;
	}

	public int getWidth()
	{
		return this.width;
	}

	public int getHeight()
	{
		return this.height;
	}
}
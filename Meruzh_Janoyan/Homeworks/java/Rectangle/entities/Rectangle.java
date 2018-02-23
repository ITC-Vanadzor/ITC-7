package entities;

public class Rectangle{
	private int a;
	private int b;

	public Rectangle(int a,int b){
		set(a,b);
	}

	public void set(int a,int b){
		this.a=a;
		this.b=b;
	}
	public int getA(){
		return this.a;
	}
	public int getB(){
		return this.b;
	}
}

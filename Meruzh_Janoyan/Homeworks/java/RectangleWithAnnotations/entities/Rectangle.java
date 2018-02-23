package entities;
import myannotations.*;

public class Rectangle{
	private int a;
	private int b;

	public Rectangle(int a,int b){
		set(a,b);
	}
	
	@Version(1.01)
	@About("Set A & B sides value")
	@Project(version=@Version(3.23),about=@About("Set side A & B"))
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
package com.itc7.entities;

public class  Rectangle {
	private int height;
	private int width;
	Rectangle(int height, int width) {
		this.height = height;
		this.width = width;
	}
	public void setter (int height, int width)
	{
		this.height = height;
		this.width = width;
	}
	public int getHeight()
	{
		return this.height;
	}
	public int getWidth()
	{
		return this.width;
	}
}

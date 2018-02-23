public class Figure implements Piece {
	private String color;
	private Point position;
	private String shape;
	Figure(String color, Point position, String shape) {
		this.color = color;
		this.position = position;
		this.shape = shape;
	}
	public boolean step(Point dot) {
		if(shape == "ship") {
			return (position.getX() == dot.getX() || position.getY() == dot.getY());
		}
	}
} 

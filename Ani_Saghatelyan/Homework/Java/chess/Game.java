
class Game
{
	public static void main(String [] args)
	{
	  Position pos1=new Position(4,4);
	  Position pos2=new Position(2,6);
	  Boat boat1=new Boat();
	  System.out.println("Boat steps "+ boat1.Step(pos1,pos2)); 	
	  Elephant elephant1= new Elephant();
	  System.out.println("Elephant steps "+elephant1.Step(pos1,pos2)); 	
	  Hourse hourse1=new Hourse();
	  System.out.println("Hourse steps "+ hourse1.Step(pos1,pos2));
	  Queen queen1=new Queen();
	  System.out.println("Queen steps "+ queen1.Step(pos1,pos2));  	
	 	
	}
}

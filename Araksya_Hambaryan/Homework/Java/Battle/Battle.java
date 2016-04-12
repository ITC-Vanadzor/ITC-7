class Battle {
    public static void main (String[] args) {
	int n = 10;
	SeaFight newMatch = new SeaFight(n);
	newMatch.cell[0][0]=true;
	newMatch.cell[1][1]=true;
	newMatch.cell[1][2]=true;
	newMatch.cell[2][1]=true;
	newMatch.cell[2][2]=true;

	System.out.println(newMatch.countBattle());
	
    } 
}

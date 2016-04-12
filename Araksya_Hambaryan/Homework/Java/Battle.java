class Battle {
    public static void main (String[] args) {
	int n = 10;
	seaFight newMatch = new seaFight(n);
	newMatch.cell[0][0]=true;
	newMatch.cell[1][1]=true;
	newMatch.cell[1][2]=true;
	newMatch.cell[2][1]=true;
	newMatch.cell[2][2]=true;

	System.out.println(newMatch.countBattle());
	
    } 
    public static class seaFight {
	int N;
	boolean [][] cell;
	public seaFight(int N) {
	    this.N = N;
	    this.initialization();
	}
	public void initialization() {
	    this.cell = new boolean[this.N][this.N];
	    for (int i = 0; i < this.N; ++i) {
		for (int j = 0; j < this.N; ++j) {
		    this.cell[i][j] = false;
		}
	    }
	}
	public int countBattle () {
	    int count = 0;
	    if (this.cell[0][0]) {
		++count;
	    }
	    int i=0;
	    int j=1;
	    while (i < this.N) {
		while (j < this.N) {
		    if (this.cell[i][j]) {
			boolean leftOk = true;
			boolean upOk = true;
			if ((j != 0) &&  (this.cell[i][j-1])) {
			    leftOk = false;
			}
			if ((i != 0) && (this.cell[i-1][j])) {
			    upOk=false;
			}
			if (leftOk && upOk) {
			    ++count; 
			}

		    }
		    ++j;
		}
		++i;
		j=0;
	    }
	    return count;
	}
	
    }    
    
}
public class SeaFight {
	int N;
	boolean [][] cell;
	public SeaFight(int N) {
	    this.N = N;
	    initialization();
	}
	public void initialization() {
	    cell = new boolean[N][N];
	    for (int i = 0; i < N; ++i) {
		    for (int j = 0; j < N; ++j) {
		        cell[i][j] = false;
		    }
	    }
	}
	public int countBattle () {
	    int count = 0;
	    if (cell[0][0]) {
		++count;
	}
	    int i=0;
	    int j=1;
	    while (i < N) {
		while (j < N) {
		    if (cell[i][j]) {
			    boolean leftOk = true;
			    boolean upOk = true;
			    if ((j != 0) &&  (cell[i][j-1])) {
			        leftOk = false;
			    }
			    if ((i != 0) && (cell[i-1][j])) {
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

public class Border {
    private char [][] word;
    
    public Border (int len) {
	word = new char[len][len];
    }
    
    private void createXWord (String str) {
	int length = word.length;
	for (int i = 0; i < length; ++i) {
	    for (int  j = 0; j < length; ++j) {
		if ( i == j) {
		    word[i][j] = str.charAt(i);
		    continue;
		}
		if (i+j == length - 1) {
		    word[i][j] = str.charAt(j);    
		} else {
		    word[i][j] = ' ';
		}
	    }
	}
    }

    public void printXWord (String str) {
	createXWord(str);
	for (int i = 0; i < word.length; ++i) {
	    for (int j = 0; j < word[i].length; ++j) {
		System.out.print(word[i][j]);	
	    }     
	    System.out.println();
	}	
    }
    
}

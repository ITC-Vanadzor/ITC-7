public class Border {
    private char [][] word;
    
    public Border (int len) {
	    word = new char[len][len];
	    initialization();
    }
    
    private void initialization() {
        int length = word.length;
	    for (int i = 0; i < length; ++i) {
	        for (int  j = 0; j < length; ++j) {
	            word[i][j] = ' ';
	        }
        }    
    }
    
    private void createXWord (String str) {
	    int length = word.length;
	    for (int i = 0; i < length; ++i) {
	        word[i][i] = word[length-i-1][i] = str.charAt(i);
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

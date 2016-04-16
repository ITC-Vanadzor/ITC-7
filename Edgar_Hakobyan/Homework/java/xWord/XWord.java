class XWord {
    private String word;
    private char[][] xWord;
    
    public XWord(String str) {
        word = str;
    }
    
    private void create() {
        for(int i=0; i<word.length(); ++i) {
            for(int j=0; j<word.length(); ++j) {
                if(i == j) {
                    xWord[i][j] = word.charAt(j);
                    continue;
                }
                if(i+j == word.length()-1) {
                    xWord[i][j] = word.charAt(j);
                } else {
                    xWord[i][j] = ' ';
                }
            }
        }
    }
    
    public void printXWord() {  
        xWord = new char[word.length()][word.length()];
        create();
        for(int i=0; i<word.length(); ++i) {
            for(int j=0; j<word.length(); ++j) {
                System.out.print(xWord[i][j]);
            }
            System.out.println();
        }
    }

}            

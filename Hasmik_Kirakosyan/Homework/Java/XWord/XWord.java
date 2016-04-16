
public class XWord {
    private String word;
    private char [][] matrix;
    private int n;

    public XWord(String word1) {
        word = word1;
        n = word1.length();
        matrix = new char[n][n];
    }
    
    public String getWord() {
        return word;
    }

    public void getXWord() {
        for (int i = 0; i < n; i++) 
          for (int j = 0; j < n; j++) {
            if (j == n-i-1) matrix[i][j] = word.charAt(i);
            else if (j == i) matrix[i][j] = word.charAt(i);
            else matrix[i][j] = ' ';
//
//            int j = n-i-1;
//            int k = i;
//            System.out.println("i ="+i);
//            System.out.println("j ="+j);
//            System.out.println("k ="+k);
//            matrix[i][j] = word.charAt(i);
//            matrix[i][k] = word.charAt(i);
        }
    }

    public void printMatrix() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print (matrix[i][j]);   
            }
           System.out.println(); 
        }
    }
}

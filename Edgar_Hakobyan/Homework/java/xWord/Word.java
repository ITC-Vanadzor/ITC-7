import java.util.Scanner;

class Word {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("enter word---- ");
        String word = in.next();
        XWord xword = new XWord(word);
        xword.printXWord();
    }
}

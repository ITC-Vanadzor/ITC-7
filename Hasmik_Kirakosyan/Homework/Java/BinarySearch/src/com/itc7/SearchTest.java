import com.itc7.BinarySearch.*;

public class SearchTest {
    public static void main (String [] args) {
        BinarySearch test = new BinarySearch();
        Integer array[] = {1,6,5,9};
        System.out.println("Needed number index is : "+test.binarySearch(array, 0, 3, 5));
    }
}

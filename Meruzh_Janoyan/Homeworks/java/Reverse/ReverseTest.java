import myreverse.MyReverse;
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;



public class ReverseTest{
	public static void main(String[] args){
		
		List<Integer> intArrList=Arrays.asList(1,2,3,4,5,6,7,8,9);		
	    MyReverse obj=new MyReverse();
	    obj.iteratorPrint(intArrList);

		}
}

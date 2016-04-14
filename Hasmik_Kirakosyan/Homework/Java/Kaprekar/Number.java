import java.util.ArrayList;
import java.util.Collections;
public class Number {
	private int number;
	private ArrayList<Integer> array = new ArrayList<Integer>();
	public Number(int number) {
		this.number = number;
// The usage of this is not preferable either. You can see details in "Joshua_Bloch_-_Effective_Java_2nd_Edition" book.
		this.toDigits();
	}
//public ->private
	public void toDigits() {
		int temp = number;
                while(temp > 0 ) {
                        array.add((Integer)temp%10);
                        temp = temp/10;
                }
                Collections.sort(array);

	}
//public ->private
	public int minNum() {
		int min=0;
		for(int j=0;j<array.size();++j) {
			min = min*10 + array.get(j);
		}
		return min;
	}
//public ->private
	public int maxNum() {
		int max = 0;
		for(int j=array.size()-1;j>=0;--j) {
			max = max*10 + array.get(j);
		}
		return max;
	}
	
//public ->private
	public int count() {
			  return array.size();
	}
	public int Diff() {
		int diff = this.maxNum() - this.minNum();	
		return diff;
	}
}



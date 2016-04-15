import java.util.ArrayList;
import java.util.Collections;
public class Number {
	private int number;
	private ArrayList<Integer> array = new ArrayList<Integer>();
	public Number(int number) {
		this.number = number;
		toDigits();
	}
	private void toDigits() {
		int temp = number;
                while(temp > 0 ) {
                        array.add((Integer)temp%10);
                        temp = temp/10;
                }
                Collections.sort(array);

	}
	private int minNum() {
		int min=0;
		for(int j=0;j<array.size();++j) {
			min = min*10 + array.get(j);
		}
		return min;
	}
	private int maxNum() {
		int max = 0;
		for(int j=array.size()-1;j>=0;--j) {
			max = max*10 + array.get(j);
		}
		return max;
	}
	public void Diff() {
		int diff = this.maxNum() - this.minNum();
		String printFormat = "%0" + array.size() + "d\n";
 		System.out.printf(printFormat, diff);
	}
}



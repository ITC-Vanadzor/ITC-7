import java.util.ArrayList;
import java.util.Collections;
class Number {
	private int number;
	private ArrayList<Integer> array = new ArrayList<Integer>();
	public Number(int number) {
		this.number = number;
		this.toDigits();
	}
	public void toDigits() {
		int temp = number;
                while(temp > 0 ) {
                        array.add((Integer)temp%10);
                        temp = temp/10;
                }
                Collections.sort(array);

	}
	public int minNum() {
		int min=0;
		for(int j=0;j<array.size();++j) {
			min = min*10 + array.get(j);
		}
		return min;
	}
	public int maxNum() {
		int max = 0;
		for(int j=array.size()-1;j>=0;--j) {
			max = max*10 + array.get(j);
		}
		return max;
	}
	public StringBuffer Diff() {
		int diff = this.maxNum() - this.minNum();
		int count = 0;
		int tmp = diff;
		while(tmp > 0) {
			tmp = tmp/10;
			count++;		
		}
		StringBuffer Kx  = new StringBuffer(array.size());
		for(int j=0;j < array.size()-count;++j) {
			Kx.append("0");
		}
		return Kx.append(diff);
	}
}



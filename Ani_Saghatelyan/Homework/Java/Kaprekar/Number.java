import java.util.ArrayList;
import java.util.Collections;
class Number {
	private int number;
	private ArrayList<Integer> array = new ArrayList<Integer>();
	public Number(int number) {
		this.number = number;
//The usage of this is not preferable either. You can see details in "Joshua_Bloch_-_Effective_Java_2nd_Edition" book.
		this.toDigits();
	}
//The function is specific to this class as returns the size of the member array, so it should be declared as private.
    public int size()
    {
    	return array.size();

    }

//public -> private ...

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
	public int Diff() {
		int diff = this.maxNum() - this.minNum();
		 
		return diff;
	}
}



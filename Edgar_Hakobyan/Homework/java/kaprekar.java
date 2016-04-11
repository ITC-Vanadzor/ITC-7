import java.util.*;

class kaprekar {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int number = in.nextInt();
		Vector<Integer> parseNumber = parse(number);
		int size = parseNumber.size();
		int result = max_min(parseNumber);
	
		if(size != parse(result).size()) {
			parseNumber = parse(result);
			while(size != parseNumber.size()){
				parseNumber.add(0);
			}
			for(int i=parseNumber.size()-1; i >=0; --i) {
				System.out.print(parseNumber.get(i));
			}
			System.out.println();
		} else {
			System.out.println(result);
		}

	}
	public static int max_min(Vector<Integer> vec) {
		for(int i=vec.size()-1; i>0; --i) {
			for(int j=0; j<i; ++j) {
				if(vec.get(j) < vec.get(j+1)) {
					Integer tmp = vec.get(j);
					vec.set(j,vec.get(j+1));
					vec.set(j+1,tmp);
				}
			}
		}
		int maxResult=0;
		int minResult=0;
		for(int a=0; a<vec.size(); ++a){
			maxResult += vec.get(a) * (int)Math.pow(10,vec.size()-a-1);
		}
		for(int b=vec.size()-1; b>=0; --b){
			minResult += vec.get(b) * (int)Math.pow(10,b);
		}
		return maxResult-minResult;
	}

	public static Vector<Integer> parse(int num) {
		Vector<Integer> vectorNumber = new Vector<Integer>();
		while(num > 0) {
            vectorNumber.add(num % 10);
            num /= 10;
        }
		return vectorNumber;
	}

}

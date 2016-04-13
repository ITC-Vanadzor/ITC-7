import java.util.*;
class Number {
		public int max_min(Vector<Integer> vec) {
				Collections.sort(vec);
				int maxResult=0;
				int minResult=0;
				for(int i=0; i<vec.size(); ++i){
						minResult += vec.get(i) * (int)Math.pow(10,vec.size()-i-1);
				}
				for(int j=vec.size()-1; j>=0; --j){
						maxResult += vec.get(j) * (int)Math.pow(10,j);
				}
				return maxResult-minResult;
		}
		public Vector<Integer> parse(int num) {
				Vector<Integer> vectorNumber = new Vector<Integer>();
				while(num > 0) {
						vectorNumber.add(num % 10);
						num /= 10;
				}
				return vectorNumber;
		}
		public void validation(Vector<Integer> parseNumber, int size, int result){
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
}

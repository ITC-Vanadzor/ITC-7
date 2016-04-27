public class Test{
	public static void main(String args[]){
		MyFunctions obj=new MyFunctions();
		int[] arr={5,0,8,9,1};

		System.out.println("Factorial of 6 is "+obj.factorial(6));
		System.out.println("Maximum of 5,0,8,9,1 is "+obj.max(arr));
		System.out.println("Minimum of 5,0,8,9,1 is "+obj.min(arr));

		int[] testArr=obj.sort(arr);
		System.out.print("Sort result of 5,0,8,9,1 is ");
		for(int i=0;i<testArr.length;++i){
			System.out.print(testArr[i]);
		}
		System.out.println();


		obj.sortReferance(arr);
		System.out.print("Referance Sort result of 5,0,8,9,1 is ");
		for(int i=0;i<arr.length;++i){
			System.out.print(arr[i]);
		}
		System.out.println();



	}
}
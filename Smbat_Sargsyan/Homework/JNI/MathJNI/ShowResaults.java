public class ShowResaults {
	public static void main(String[] args) {
		int [] array = {1,8,99,25,67,88};
		MathJNI m = new MathJNI();
		System.out.println("factorial is : " + m.factorial(5));
		System.out.println("min is : " + m.min(array));
		System.out.println("max is : " + m.max(array));
		System.out.println("sort in decrease " + m.sortDecrease(array));
		System.out.println("sort in increase " + m.sortIncrease(array));
	}
}

public class  NativeCallsClass
{
    static
    {
        System.loadLibrary("mathLib");
    }
    
    native  public int factorial(int number);
    native  public  int[] sortArray(int[] array);
    native  public  int[] returnSortArray(int [] array);
    native  public  int max(int [] array);
    native  public  int min(int [] array);

}

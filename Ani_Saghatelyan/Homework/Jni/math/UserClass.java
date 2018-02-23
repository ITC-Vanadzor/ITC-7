
public class UserClass
{
   public  static  void main(String[] args)
   {
     NativeCallsClass myObj=new NativeCallsClass();
     int fact = 0;
     fact=myObj.factorial(3);
     System.out.println("Factorial : " + fact);
     int[] array={8,7,5,6,1};
     int [] newArray;
     // sorts and returns the same array
      newArray=myObj.sortArray(array);
      for(int i=0; i<5; i++)
      {
             System.out.print(newArray[i]+" ");

      }
      System.out.println("Old array ");
        for(int i=0; i<5; i++)
        {
             System.out.print(array[i]+" ");
        }   
     System.out.print("Max: "+myObj.max(array));
     System.out.print("Min: "+myObj.min(array));
     

      
    
   }

}

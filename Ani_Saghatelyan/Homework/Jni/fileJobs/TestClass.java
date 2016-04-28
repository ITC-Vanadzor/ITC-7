
public class TestClass{

    public static void main(String [] args){
 
        NativeClass test = new NativeClass("my.txt");
        //test.WorkToFile();
        NativeClass.CreateStatic("stat.txt");
        test.Write("Hello****");
        test.Read();
        test.Delete();
        NativeClass.DeleteStatic("stat.txt");
 
     }
}

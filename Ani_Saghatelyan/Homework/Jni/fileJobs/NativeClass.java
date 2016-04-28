
public class NativeClass{
        static{
            System.loadLibrary("fileJni");
        }
        public native void WorkToFile(); 
}

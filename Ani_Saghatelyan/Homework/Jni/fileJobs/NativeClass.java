
public class NativeClass{
        static{
            System.loadLibrary("fileJni");
        }
       public NativeClass(String name){
            FileClass(name);
        }
       public native void FileClass(String file);
       public native void Create(String file);
       public native void Write(String text);
       public native void Read();
       public native void Delete();
       public static native void CreateStatic(String file);
       public static native void DeleteStatic(String file);
 
}

public class FileReader{
	static{
 		System.loadLibrary("FileReader");
 	}
	public FileReader(String fPath){
		constructor(fPath);
	}
	private native void constructor(String fPath);
	public native void write(String data);
	public static native void write(String fPtah,String data);
	public native String read();
	public static native String read(String fPath);
	
}

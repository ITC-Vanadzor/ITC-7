public class JNIFile {
    static {
	System.loadLibrary("JNIFile");
    }
    public native void fileActions();
}


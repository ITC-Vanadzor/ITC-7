public class JNIFile {
    static {
	System.loadLibrary("JNIFile");
    }
    public native void createFile(String fileName);
    public native void writeFile(String data);
    public native void readFile();
    public native void deleteFile();
    public native static void createFileStatic(String fileName);
    public native static void deleteFileStatic(String fileName);

}


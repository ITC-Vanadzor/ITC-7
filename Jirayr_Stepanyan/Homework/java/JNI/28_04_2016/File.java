public class File
{
	static
	{
		System.loadLibrary("File");
	}
	public native void write(String message);
	public native void read();
	public native void create();
	public native void delete();
	public native static void createFileWithPath(String path);
	public native static void deleteFileWithPath(String path);
}
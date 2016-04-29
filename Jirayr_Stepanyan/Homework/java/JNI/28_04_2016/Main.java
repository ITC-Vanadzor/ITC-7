public class Main
{
	public static void main(String[] args)
	{
		File file = new File();
		file.write("barev Gagas axper");
		file.read();
		file.create();
		//file.delete();
		file.createFileWithPath("~/Desktop/file.txt");
		file.deleteFileWithPath("~/Desktop/file.txt");
	}
}
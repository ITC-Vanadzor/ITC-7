public class FileTest {
    public static void main(String[] args) {
	JNIFile fileObj = new JNIFile();
	fileObj.createFile("example.txt");
	fileObj.writeFile("This is File class testing using JNI");
	fileObj.readFile();
	fileObj.deleteFile();
	
    }    
}

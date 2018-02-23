public class FileReaderTest{
	public static void main(String[] args){

		FileReader fd=new FileReader("./resources/objectFile.txt");
		fd.write("Hello From Object!");

		FileReader.write("./resources/staticFile.txt","Hello from Static!");

		System.out.println("Object file: "+fd.read());

		System.out.println("Static file: "+FileReader.read("./resources/staticFile.txt"));
	}
} 
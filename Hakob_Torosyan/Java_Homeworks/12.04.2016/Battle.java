import java.util.Scanner;
class Battle {
	public static void main(String args[]) {
		System.out.println("Import size of desk: ");
		Scanner in = new Scanner(System.in);
		int size = in.nextInt();
		int[][] desk = new int[size][size];
		for(int i = 0; i < desk.length; i++) {
			for(int j = 0; j < desk[i].length; j++) {
				System.out.print("Import value for element desk["+ i +"]["+ j +"]:");
				desk[i][j] = in.nextInt();
			}
		} 
		in.close();
		System.out.println("Count of ships: " + getCount(desk,size));
	}
	private static int getCount(int[][] desk, int size) {
		int shipCount = 0;
		boolean isShip = true;
		for(int i = 0; i < size; i++) {
			for(int j = 0; j < size; j++) {
				if(desk[i][j] == 1) {
					int x = i; 
					int y = j;
					isShip = true;
					while(y < size && desk[i][y] == 1) {
						y++;
					}
					while(x < size && desk[x][j] == 1) {
						x++;
					}
					for(int k = i; k <= x-1; k++) {
						for(int c = j; c <= y-1; c++) {
							if(desk[k][c] == 1) {
								desk[k][c] = 2;
							}else{
							 	isShip = false;
								break;		
							}
						}
						if(!isShip) {
							break;
						}	
					}
					if(isShip) {
						shipCount++;
					}
				}
			}
		}
		return shipCount;
	}


}

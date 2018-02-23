import java.util.Scanner;
class Battle {
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		int field = -1;
		do
		{
			System.out.print("Please iput size of field n = ");
			field = sc.nextInt();
		}
		while (field < 2); 
		
		int[][] a;
		a = new int[field][field];
		int i1 = 0;
		int j1 = 0;
		
		for (int i=0;i<field;++i)
			{
				for (int j=0;j<field;++j)
					{
						i1 = i+1;
						j1 = j+1;
						System.out.print("Please input a[" + i1 + "][" + j1 + "]= ");
						a[i][j] = sc.nextInt();
					}
			}
			
		int count=0;
		for (int i=0;i<field;++i)
			{
				for (int j=0;j<field;++j)
					{
						if (a[i][j]==1)
						{
							if (i==0 || a[i-1][j]==0)
							{
							for (int k=j; k< field; ++k)
								{
									if (a[i][k]==0 )
									{
										j=k;
									}
								}
							count=count+1;
							}
						}
					}
			}
	System.out.println("Count of boat is equal " + count);
	}
}

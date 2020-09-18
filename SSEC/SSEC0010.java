import java.util.Scanner;
class cc1
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		while(tc --> 0)
		{
			int n = sc.nextInt();
			n = n-1;
			String arr [] = {"S","SS","SSE","SSEC","SSE","SS","S"};
			int l = arr.length;
			int res;			
			if(l>=7)
			{
				res = n%7;		
				String s = arr[res];
				char []ar = s.toCharArray();
				for(int i=0;i<ar.length;++i)
				{
					int ascii = (int)ar[i];
					System.out.print(ascii+ " ");
				}
				System.out.println();		
			}else
			{
				String s = arr[n];
				char []ar = s.toCharArray();
				for(int i=0;i<ar.length;++i)
				{
					int ascii = (int)ar[i];
					System.out.print(ascii + " ");
				}
				System.out.println();	
			}
	
		}
	}
}

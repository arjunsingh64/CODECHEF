import java.util.Scanner;
class cc1
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		while(tc --> 0)
		{
			String str = sc.next();
			char [] arr = str.toCharArray();
			int l = arr.length;
			int [] ar = new int[l];
			for(int i=0;i<l;++i)
			{
				int n=Character.getNumericValue(arr[i]);
				n=n-2;			
				ar[i]=n;
			}
			for(int i=0;i<l;++i)
			System.out.print(ar[i]);
			System.out.println();
		}
	}
}

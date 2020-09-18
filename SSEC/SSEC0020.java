import java.util.Scanner;
class cc1
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		char [] arr = s.toCharArray();
		int l = arr.length;
		int cnt=l;
		int counter=0;
		for(int i=0;i<l;++i)
		{
			String st="";
			String str="";
			for(int j=0;j<i+1;++j)
			{
				st=String.valueOf(arr[j]); 
				str = str + st;
			}
			int num=Integer.parseInt(str);  
			if(num%cnt!=0)
			{
				System.out.println("No");				
				break;		
			}	
			cnt--;
			++counter;
			if(counter==l)
			System.out.println("Yes");		
		}
		
	
		
	}
}

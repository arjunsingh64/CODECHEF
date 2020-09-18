import java.util.Scanner;
class cc1
{
   static boolean isPrime(int n) 
    { 
    
        if (n <= 1) 
            return false; 
  
        for (int i = 2; i < n; i++) 
            if (n % i == 0) 
                return false; 
  
        return true; 
    } 
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int res1 = a*b;
		int res2 = a/2*b/2;
		int first=0,second=0;
		for(int i=a;i<=b;++i)
		{
			boolean f = isPrime(i);
			if(f)
			first=i;
			{
				for(int j=i+1;j<=b;++j)
				{
					boolean s = isPrime(j);
					if(s)
					second=j;	
					
					if(f && s)
					{	
						int result = first*second;
						if(res2<=result && result<=res1)
						{
							System.out.println(first + "," + second );	
						}
					}
				}			
			}
	}
}
}

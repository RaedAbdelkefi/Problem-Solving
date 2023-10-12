import java.util.*;

public class App {

	static Scanner sc;
	
	

	public static void main(String[] args) {

		sc = new Scanner(System.in);

		String ch=sc.nextLine();
		StringBuilder ls= new StringBuilder(ch);
		StringBuilder ls1=new StringBuilder();
		int ones=0;
		int m=ls.length();
	
		
		boolean b=false;
		int two=-1;
		for(int i=0;i<m;i++)
		{

			if (ls.charAt(i)!='1')
				{
					if (ls.charAt(i)=='2' && !b) 
					{
						b=true;
						two=ls1.length();

					}
					
					ls1.append(ls.charAt(i));
				}

			
			else ones++;
		}
		
		
		
		if (two==-1) two=ls1.length();
		String a= "1".repeat(ones);
		
		ls1.insert(two,a);
		String ch2=ls1.toString();
		System.out.println(ch2);

	

		

		
		
		


		

		
	}
}

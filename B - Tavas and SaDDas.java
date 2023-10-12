import java.util.*;
public class App {

	static Scanner sc;
	
	

	public static void main(String[] args) {

		sc = new Scanner(System.in);

		String ch=sc.nextLine();
		int n=ch.length()-1;
		int s=0;
		for(int i=0;i<ch.length();i++)
		{	
			if (ch.charAt(i)=='4') s+=Math.pow(2,n);
			if(ch.charAt(i)=='7') s+=Math.pow(2, n)*2;
			n--;
		}



		

		System.out.println(s);
		




		

		
	}
}

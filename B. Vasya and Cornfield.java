import java.util.*;

public class App {

	static Scanner sc;
	
	

	public static void main(String[] args) {

		sc = new Scanner(System.in);
		int n=sc.nextInt();
		int d=sc.nextInt();
		Point x1 =new Point(-d,d);
		Point x0 = new Point(n-d,n-d);
		
		
		List <String> l= new ArrayList<>();
		int m=sc.nextInt();
		for(int i=0;i<m;i++)
			{
				int a=sc.nextInt();
				int y=sc.nextInt();
				Point p=new Point(a-d, y);
				
			
				l.add(appartient(x0,p, x1));
			}
		for(int i=0;i<m;i++)
			System.out.println(l.get(i));


		
	}
	public static class Point{
		private int x;
		private int y;
		public Point(int x,int y)
		{
			this.x=x;
			this.y=y;
		}
		public int getx() 
		{
			return this.x;
		}
		
		public int gety() 
		{
			return this.y;
		}
		
		
	}
	public static double scalar(Point a,Point b)
	{
		return a.getx() * b.getx() + a.gety()*b.gety() ;
	}
	public static String appartient(Point a, Point b ,Point c)
	{
		if( scalar(a, b) <= scalar(a, a) && scalar(a, b) >=0  && scalar(c,b)<=scalar(c, c) && scalar(c, b)>=0 )
			return "YES";
		return "NO";
	}
}

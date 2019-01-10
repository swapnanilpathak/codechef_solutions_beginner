import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		double a,b;
		char C;
		Scanner sc = new Scanner(System.in);
		a = sc.nextDouble();
		b = sc.nextDouble();
		C = sc.next().charAt(0);
		
		switch(C) {
		case '+':System.out.println(a+b);
				break;
		case '-':System.out.println(a-b);
				break;
		case '*':System.out.println(a*b);
				break;
				
		case '/':System.out.println(a/b);
				break;
		}
	}
	

}

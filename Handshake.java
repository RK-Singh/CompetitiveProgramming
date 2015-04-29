// https://www.hackerrank.com/challenges/handshake
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Handshake {
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader cin = new BufferedReader(
				new InputStreamReader(System.in));
		int T = Integer.parseInt(cin.readLine());
		while(T>=0){
			int N = Integer.parseInt(cin.readLine());
			
			System.out.println((N*(N-1))/2);
			T--;
		}
	}
}

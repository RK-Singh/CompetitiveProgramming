// https://www.hackerrank.com/challenges/strange-grid
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class StrangeGrid {

	public static void main(String[] args) throws NumberFormatException,
			IOException {
		BufferedReader cin = new BufferedReader(
				new InputStreamReader(System.in));
		long r, c;
		String[] line = cin.readLine().split(" ");
		r = Long.parseLong(line[0]);
		c = Long.parseLong(line[1]);
		long result = 0;
		if (r % 2 == 0) { // if r is even
			result = r * 5 - 1;
		} else {
			result = (r + 1) * 5 - 2;
		}
		while (c != 5) {
			result = result - 2;
			c++;
		}
		System.out.println(result);
	}

}

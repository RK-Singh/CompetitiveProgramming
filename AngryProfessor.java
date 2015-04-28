//https://www.hackerrank.com/challenges/angry-professor/submissions/code/11498825
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class AngryProfessor {
    public static void main(String[] args) throws NumberFormatException,
            IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        while (T != 0) {

            String line[] = br.readLine().split(" ");
            int N = Integer.parseInt(line[0]);
            int K = Integer.parseInt(line[1]);
            line = br.readLine().split(" ");
            int[] arrivalTime = new int[N];
            for (int i = 0; i < N; i++) {
                arrivalTime[i] = Integer.parseInt(line[i]);
            }
            // main logic
            Arrays.sort(arrivalTime);
            int count;
            for (count = 0; arrivalTime[count] <= 0; count++)
                ;
            if (count < K)
                System.out.println("YES");
            else
                System.out.println("NO");
            //
            T--;
        }
    }
}

//https://www.hackerrank.com/challenges/song-of-pi/submissions/code/11498999
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class SongOfPi {
    public static void main(String[] args) throws NumberFormatException,
            IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        int[] PI = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4,
                6, 2, 6, 4, 3, 3, 8, 3, 3 };
        while (T != 0) {
            String[] song = br.readLine().trim().split(" ");
            boolean isPi = true;
            for (int i = 0; i < song.length; i++) {
                if (PI[i] != song[i].length()) {
                    isPi = false;
                    break;
                }
            }
            if (isPi)
                System.out.println("It\'s a pi song.");
            else
                System.out.println("It\'s not a pi song.");
            T--;
        }
    }
}

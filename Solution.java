import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Solution {
    public static void main(String[] args) throws NumberFormatException,
            IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int noOfSticks = Integer.parseInt(br.readLine());
        String sticks[] = br.readLine().split(" ");
        int[] stick = new int[noOfSticks];
        for (int i = 0; i < noOfSticks; i++) {
            stick[i] = Integer.parseInt(sticks[i]);
        }
        // actual code begins here
        Arrays.sort(stick);
        int beg = 0;
        int cut = 0;
        int min = 0;
        do {
            cut = 0;
            while (stick[beg] <= 0 && beg <= noOfSticks)
                beg++;
            min = stick[beg];
            for (int i = beg; i < noOfSticks; i++) {
                stick[i] -= min;
                cut++;
            }
            System.out.println(cut);
        } while (cut != 0);

    }
}

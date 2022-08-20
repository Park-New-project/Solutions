import java.util.ArrayList;
import java.util.Comparator;
import java.util.TreeSet;

public class P68644 {
	public static void main(String[] args) {
		SolutionP68644 s = new SolutionP68644();
		int[] input = {2,1,3,4,1};
		System.out.println(s.solution(input));
	}
}
class SolutionP68644 {
    public int[] solution(int[] numbers) {
        int[] answer = {};
        ArrayList<Integer> arr = new ArrayList<Integer>();
        for(int i =0; i < numbers.length; i++)
            for(int j=0 ; j< numbers.length; j++) {
            	if(i==j) continue;
            	int sum = numbers[i] + numbers[j]; 
            	arr.add(sum);
            }
        TreeSet<Integer> h = new TreeSet<Integer>(arr);
        arr = new ArrayList<Integer>(h);
        arr.sort(Comparator.naturalOrder());

        return answer;
    }
}
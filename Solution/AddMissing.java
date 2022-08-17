
import java.util.Arrays;

public class AddMissing {
	public static void main(String[] args) {
		SolutionAddMissing s = new SolutionAddMissing();
		int[] input = new int[]{1,2,3,4,6,7,8,0};
		System.out.println(s.solution(input));
	}
}

class SolutionAddMissing {
	public int solution(int[] numbers) {
        int answer = -1;
        answer = 0;
        for(int i = 0; i< 10 ; i++) {
        	if(!contains(numbers, i)) answer +=i;
        }
        
        return answer;
    }
    boolean contains(int[] numbers, int key) {
        return Arrays.stream(numbers).anyMatch(i -> i == key);
    }
}

	


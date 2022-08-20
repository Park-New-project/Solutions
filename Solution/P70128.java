public class P70128 {
	public static void main(String[] args) {
		SolutionP70128 s = new SolutionP70128();
		int[] a = {1,2,3,4};
		int[] b = {-3,-1,0,2};
		System.out.println(s.solution(a, b));
	}
}
class SolutionP70128 {
	public int solution(int[] a, int[] b) {
        int answer = 1234567890;
        answer = 0;
        for(int i = 0; i < a.length; i++){
        	answer += a[i]*b[i];
        }
        return answer;
    }
}

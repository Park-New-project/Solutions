public class P64061 {
public static void main(String[] args) {
	SolutionP64061 s = new SolutionP64061();
	int[][] board = {{0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1}};
	int[] moves = {1,5,3,5,1,2,1,4};
	System.out.println(s.solution(board, moves));
}
}
class SolutionP64061 {
	public int[] solution(int[][] board, int[] moves) {
	  int[] answer = {};
	  int pick = 0;
	  for(int i: moves) {
		  if ( board[i][pick] == 0) {
			  int temp = board[i][pick];
		  }
		  board[i][pick] = 0;
		  pick--;
	  }
	  return answer;
	}
}

import java.util.*;
import java.io.*;
import java.io.*;
public class Main {
	/*사람들은 0번부터 N-1번으로 번호가 매겨져 있다.
	 *  N (5 ≤ N ≤ 2000)
	 *  M (1 ≤ M ≤ 2000)
	 * */
	static int N;
	static int M;
	private static ArrayList<Integer>[] relation;
	static int ans = 0;
	static boolean[] visited = new boolean[2001];

	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		
		relation = new ArrayList[N];
		for(int i=0; i<N; i++)
			relation[i] = new ArrayList<Integer>();
		
		
		
		for(int i = 0; i < M; i++) {
			st = new StringTokenizer(br.readLine());
			int n1 = Integer.parseInt(st.nextToken());
			int n2 = Integer.parseInt(st.nextToken());
			relation[n2].add(n1);
			relation[n1].add(n2);
		}
		
		
		for(int i = 0; i < N; i++) {
			if(ans == 0)
				dfs(i, 1);
			//System.out.println();
		}
		
		bw.write(Integer.toString(ans));
		bw.flush();
		bw.close();
		br.close();
	}
	
	public static void dfs(int start, int depth) {
		
		if(depth == 5) {
			ans = 1;
			return;
		}
		//System.out.print(start+" ");
		visited[start] = true;
		
		
		for(int i : relation[start]) {
			int next = i;
			if(!visited[next]) {
				dfs(next, depth+1);
			}
		}
		
		visited[start] = false;
	
	}

}

import java.util.*;
import java.io.*;


public class Main {
	static int N;
	//static boolean[] visited;
	static int[] visited;
	static String answer;
	static ArrayList<ArrayList<Integer>> graph = new ArrayList<ArrayList<Integer>>();
	
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String input = br.readLine();
		StringTokenizer st = new StringTokenizer(input);
		
		N = Integer.parseInt(st.nextToken());
		visited = new int[N+1];
		
		for(int i=0; i<=N; i++) {
			graph.add(new ArrayList<Integer>());
		}
		
		
		for (int i = 1; i < N; i++) {
			int M = Integer.parseInt(br.readLine());
			st = new StringTokenizer(br.readLine());
			
			
			for (int j = 0; j < M; j++) {
				graph.get(i).add(Integer.parseInt(st.nextToken()));
			}
		}
		
		answer = "NO CYCLE";
		
		dfs(1); //1번이 반드시 출발지
		
		System.out.println(answer);
	}
	static void dfs(int start) {
		
		if (visited[start]==-1) {
			answer = "CYCLE";
			return;
		}
		visited[start] = -1;
		//System.out.println(start + " ");
		
		
		for(int next : graph.get(start)) {
			if(visited[next]!=1) {
				dfs(next);
			}
				
		}
		visited[start] = 1;
		
	}

}

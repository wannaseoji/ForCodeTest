
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.StringTokenizer;




public class Main {
	static int[][] graph = new int[501][1001];
	//8방 탐색 
	static int dx[] = {-2,-2,-1,-1,+1,+1,+2,+2};
	static int dy[] = {-1,+1,-2,+2,-2,+2,-1,+1};
	static int N;
	static int M;
	static ArrayList<Node> horses = new ArrayList<Node>();
	static int [][]visited;
	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		N = Integer.parseInt(st.nextToken()); // 체스판 크기는 N*N;
		M = Integer.parseInt(st.nextToken()); // M개의 상대편말의 위치 
		visited = new int[N+1][N+1];
		
		st = new StringTokenizer(br.readLine());
		
		int kn_y =Integer.parseInt(st.nextToken());
		
		int kn_x =Integer.parseInt(st.nextToken());
		
		
		for(int i=0; i<M; i++) {
			st = new StringTokenizer(br.readLine());
			int y= Integer.parseInt(st.nextToken());
			int x = Integer.parseInt(st.nextToken());
			graph[y][x] =1; //말이 놓인 위치
			horses.add(new Node(y,x));
			
		}
		//int cnt;
		
		BFS(kn_y, kn_x);
		
		
		for(int i=0; i<horses.size(); i++) {
			System.out.print(visited[horses.get(i).y][horses.get(i).x]+" ");
		}
		
		
	}
	
	private static void BFS(int kn_y, int kn_x) { //idx 는 몇번 말
		
		ArrayDeque<Node> adq = new ArrayDeque<Node>();
		Node n = new Node(kn_y, kn_x);
		adq.add(n);
		//int moveCnt = 0; //이동거리
		//int min = Integer.MAX_VALUE; //최소이동거리
		while(!adq.isEmpty()) {
			
			n = (Node) adq.poll();
			int curX =n.x;
			int curY =n.y;
			
			for(int i=0; i<8; i++) {
				int ny = curY+dy[i];
				int nx = curX+dx[i];
				
				if(ny<0 || ny>N ||nx<0 || nx>N || visited[ny][nx]!=0 )continue; //나가면 탐색중지
				
				adq.add(new Node(ny, nx));
				visited[ny][nx] = visited[curY][curX]+1;
				
					
			}
			
			
		}
		
		
		
	}

	static class Node{
		int x,y;
		Node(int y, int x){
			this.y = y;
			this.x = x;
			
		}
	}

}

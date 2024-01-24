import java.io.*;
import java.util.*;

public class Main {
	static int [][]graph;
	static int R,C;
	static int [][]rules;
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		R = Integer.parseInt(st.nextToken());
		C = Integer.parseInt(st.nextToken());
		
		graph = new int[R][C];
		
		for(int i=0; i<R; i++) {
			st = new StringTokenizer(br.readLine());
			
			for(int j=0; j<C; j++) {
				
				graph[i][j] = Integer.parseInt(st.nextToken());
				
			}
		}
		st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		rules = new int[N][2];
		for(int i=0;i<N; i++) {
			st = new StringTokenizer(br.readLine());
			rules[i][0] = Integer.parseInt(st.nextToken());
			rules[i][1] = Integer.parseInt(st.nextToken());
			//System.out.println(rules[i][0]+" "+rules[i][1]);
		}
		int min=987654321;
		min = BFS(0,0,0);
		
		System.out.println(min);
	}
	static int BFS(int startY, int startX, int dist) {
		boolean[][] visited = new boolean[R][C];
		
		ArrayDeque<Node> adq = new ArrayDeque<Node>();
		for (int i = 0; i < C; i++) {
            if (graph[startY][i] == 1) {
                adq.addLast(new Node(startY, i, 0));
                visited[startY][i] = true;
            }
        }

		Node n = new Node(startY, startX, dist);
		adq.add(n);
		visited[startY][startX] =true;
		int min =987654321;
		while(!adq.isEmpty()) {
			n = adq.poll();
			int currY = n.y;
			int currX = n.x;
			int currDist = n.dist;
			if(currY==R-1)return currDist;
			//System.out.println(currY+" "+currX+" "+currDist);
			
			//System.out.println(rules.length);
			for(int i=0; i<rules.length; i++) {
				int ny = currY+ rules[i][0];
				int nx = currX+ rules[i][1];
				if(ny>=R||ny<0||nx>=C||nx<0 ) continue;
				//System.out.println(ny+" "+nx);
				
				if(visited[ny][nx]||graph[ny][nx]!=1)continue;
				
				if(graph[ny][nx]==1) {
					visited[ny][nx] = true;
					adq.add(new Node(ny,nx, (currDist+1)));
					
						
				}
				
				
			}
		}
		return -1;
	}
	static class Node{
		int x,y,dist;
		public Node(int y, int x,int dist) {
			this.x =x;
			this.y = y;
			this.dist = dist;
		}
	}

}

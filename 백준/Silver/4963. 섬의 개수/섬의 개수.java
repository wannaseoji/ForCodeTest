import java.util.*;
import java.io.*;


public class Main {
	static boolean [][] visited = new boolean[51][51];
	static int[] dx = {1,-1,0,0,1,-1,1,-1};
    static int[] dy = {0,0,1,-1,1,1,-1,-1};
    static int w;
	static int h; 
    
    static class Node {
        int x;
        int y;
        public Node(int n, int m) {
            this.x = m;
            this.y = n;
        }
    }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		while(true) {
			w = sc.nextInt();
			h = sc.nextInt();
			if(w == h && h == 0)break;
			int [][] map = new int[h][w];
			
			
			for(int i=0; i<h; i++) {
				for(int j=0; j<w; j++) {
					map[i][j] = sc.nextInt();
				}	
			}
			int ans=0;
			for(int i=0; i<h; i++) {
				for(int j=0; j<w; j++) {
					if(map[i][j]==1 && !visited[i][j]) {
						BFS(i, j, map);
						ans++;
					}
				}	
			}
			
			for(int i=0; i<50; i++) {
				for(int j=0; j<50; j++) {
					visited[i][j]=false;
				}	
			}
			
			System.out.println(ans);
		}
	}
	

	static void BFS(int sy, int sx, int[][] graph) {
		Deque<Node> q = new ArrayDeque<>();
        
		visited[sy][sx]=true;
		
        q.add(new Node(sy,sx));
        while (!q.isEmpty()) {
            Node node = q.pollFirst();
            
            for (int i = 0; i < 8; i++) {
                int ny = dx[i] + node.y;
                int nx = dy[i] + node.x;
                
                if (0<=nx && nx<w && 0<=ny&& ny<h && graph[ny][nx]==1) {
                    if (!visited[ny][nx]) {
                    	visited[ny][nx]=true;
                        q.addLast(new Node(ny,nx));
                    }
                }
            }
        }
	}

}

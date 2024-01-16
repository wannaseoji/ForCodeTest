import java.util.*;
import java.io.*;
import java.io.*;
public class Main {
	static char[][] fence = new char[251][251]; //limit max size of array to 251 x 251
    static boolean[][] visited = new boolean[251][251]; // false is defualt
    static int R,C; //Rows and Cols
    static int dx[] = {1,-1,0,0}; //delta method for 4-way search 
    static int dy[] = {0,0,-1,1};
    
    public static void main(String[] args) throws IOException {
        // TODO Auto-generated method stub
        
        
        /***************************INPUT***************************/
        
        
        
        //Scanner sc = new Scanner(System.in);
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        
        String input = br.readLine();
        StringTokenizer st = new StringTokenizer(input);
        
        
        R = Integer.parseInt(st.nextToken());
        C = Integer.parseInt(st.nextToken());
        
        
        for(int i=0; i<R; i++) {
            input = br.readLine();
            
            for(int j=0; j<input.length(); j++) {
                fence[i][j] = input.charAt(j);
            }
        }
        
        /***************************INPUT***************************/
        
        /***************************ALGO****************************/
        //idea 
        //    #이 아닐때&& visited==0일 때 사방탐색.
        //    k와 v의 개수 저장
        //     개수 비교 후 초기화
        //     누적
         //the accumulate sum of sheeps and wolves idx[0] => sheeps, idx[1] => wolves
        int sheeps=0, wolves=0;
        for(int i =0; i<R; i++) {
            for(int j=0; j<C; j++) {
                int animals[] = new int[2];
                if(!(fence[i][j]=='#') && !visited[i][j])
                    animals = BFS(i, j);
                sheeps += animals[0];
                wolves += animals[1];
                
            }
        }
        bw.write(sheeps+" "+wolves);
        bw.flush();
        
    }
    public static class Node{
        int x,y;
        Node(int y, int x){
            this.y = y;
            this.x = x;
        }
    }
    static int[] BFS(int sy, int sx) {
        Deque<Node> q = new ArrayDeque<>();
        int animals[] = new int[2]; // the local consquences of sheeps and wolves.
        visited[sy][sx]=true;
        
        switch(fence[sy][sx]) {
        case 'k' :
            animals[0]++;
            break;
        case 'v' :
            animals[1]++;
            break;
        
        }
        
        q.add(new Node(sy,sx));
        while (!q.isEmpty()) {
            Node node = q.pollFirst();
            
            for (int i = 0; i < 4; i++) {
                int ny = dx[i] + node.y;
                int nx = dy[i] + node.x;
                
                if (0<=nx && nx<C && 0<=ny&& ny<R && !(fence[ny][nx] == '#')) {
                    if (!visited[ny][nx]) {
                        switch(fence[ny][nx]) {
                        case 'k' :
                            animals[0]++;
                            break;
                        case 'v' :
                            animals[1]++;
                            break;
                       
                        }
                        visited[ny][nx]=true;
                        q.addLast(new Node(ny,nx));
                    }
                }
            }
        }
        if(animals[0]>animals[1])animals[1]=0;
        else
            animals[0]=0;
        return animals;
    }

	

}

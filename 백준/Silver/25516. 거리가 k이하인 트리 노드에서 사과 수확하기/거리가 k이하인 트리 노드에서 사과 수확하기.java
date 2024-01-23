
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.StringTokenizer;


public class Main {
    static int count = 0; //사과 총 개수
    static List<Integer>[] list ;
    static int[] apples ;
    static boolean[] visited ;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
   
        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        //System.out.println(n+" "+k);
        list = new ArrayList[n];
        visited = new boolean[n];
        apples = new int[n]; //노드의 사과 
        for(int i=0; i<n; i++) {
        	list[i] = new ArrayList<Integer>();
        }
        for (int i = 0; i < n-1; i++) {
            st = new StringTokenizer(br.readLine());
            int p = Integer.parseInt(st.nextToken());
            int c = Integer.parseInt(st.nextToken());
            //System.out.println(p+" "+c);
            list[p].add(c);
            //list[c].add(p);
            
        }
        //System.out.println(Arrays.toString(list));
        
        st= new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            apples[i] = Integer.parseInt(st.nextToken());
            //System.out.print(apples[i]+" ");
        }	
        
        BFS(0,k-1);
        	
        System.out.println(count);
    }
    static void BFS(int start, int depth) {
    	ArrayDeque<Node> adq = new ArrayDeque<Node>();
    	adq.add(new Node(start,depth));
    	
        while (!adq.isEmpty()) {
        	Node n = adq.poll();
            int curr = n.value;
            int d = n.depth;
            visited[curr] = true;
            //System.out.println(d);
            if (apples[curr] == 1) {
                count++;
            }

            for (int child : list[curr]) {
                if (!visited[child]&&d>=0) {
                    visited[child] = true;
                    adq.add(new Node(child,d-1));
                    //depth--;// 거리가 k 이하일때.
                }
            }

            
        }
    	
    	
    }
    static class Node {
        int value, depth;

        public Node(int value, int depth) {
            this.value = value;
            this.depth = depth;
        }
    }
}


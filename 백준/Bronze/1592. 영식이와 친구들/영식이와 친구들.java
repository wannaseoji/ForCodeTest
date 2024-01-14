import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String input = br.readLine();
		StringTokenizer st = new StringTokenizer(input);
		
		int n = Integer.parseInt(st.nextToken());
		int m = Integer.parseInt(st.nextToken());
		int l = Integer.parseInt(st.nextToken());
		
		int []people = new int[n+1]; //횟수를 저장할 것

		//people[1]=1;
		int start = 1;
		int cnt = 0;
		
		while(true) {
			
			
			people[start]+=1;
			if(people[start]==m)break;
			
			
			//System.out.println(start);
			if(people[start]%2==1) {
				
				start = (start+l)%(n); //시계방향
				if(start > n)start=start-n;
			}
			else {
				
				start = (start -l);
				if(start<0)start +=n;
				 
			}
			
			cnt ++;
			
		}
		
		System.out.println(cnt);
		
		
	}	

}

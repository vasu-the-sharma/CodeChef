
import java.util.*;
import java.lang.*;
import java.io.*;

public class Main {
    public static void main(String args[]) {
    Scanner s = new Scanner(System.in);
    int[] arr = new int[1000001];
	int[] narr = new int[1000001];
	for(int i=0;i<1000001;i++){
	    arr[i]=0;
	}
	arr[0]=-1;
	arr[1]=-1;
	for(int i=2;i<1000001;i++){
	    if(arr[i]==0){
	    for(int j=2*i;j<1000001;j=j+i){
	       arr[j]=-1;
	    }
	    }
	}
	int ans=0;
   for(int i=0;i<1000001;i++){
   if(arr[i]==0&&arr[i-2]==0){
   	ans++;
   }
   narr[i]=ans;
   }
	int t = s.nextInt();
	while(t!=0){
		int n = s.nextInt();
		if(n<=4)
			System.out.println("0");
		else
			System.out.println(narr[n]);
        t--;
	}
    }
}

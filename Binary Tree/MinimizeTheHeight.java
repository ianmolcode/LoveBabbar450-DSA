public // { Driver Code Starts
    // Initial Template for Java
    
    import java.io.*;
    import java.util.*;
    
      public class Main {
    
        public static void main(String[] args) throws Exception {
            BufferedReader br =
                new BufferedReader(new InputStreamReader(System.in));
            int tc = Integer.parseInt(br.readLine().trim());
            while (tc-- > 0) {
                String[] inputLine;
                inputLine = br.readLine().trim().split(" ");
                int k = Integer.parseInt(inputLine[0]);
                inputLine = br.readLine().trim().split(" ");
                int n = Integer.parseInt(inputLine[0]);
                int[] arr = new int[n];
                inputLine = br.readLine().trim().split(" ");
                for (int i = 0; i < n; i++) {
                    arr[i] = Integer.parseInt(inputLine[i]);
                }
    
                int ans = new Solution().getMinDiff(arr, n, k);
                System.out.println(ans);
            }
        }
    }// } Driver Code Ends
    
    
    // User function Template for Java
    
    class Solution {
       int getMinDiff(int[] arr, int n, int k) {
           // code here
           //first we short the array
           Arrays.sort(arr);
           int smallest=arr[0]+k;
           int largest=arr[n-1]-k;
           int ans=arr[n-1]-arr[0];
           int max,min;
           for(int i=1;i<n;i++)
           { max= Math.max(largest,arr[i-1]+k);
             // we find largest element execpt last element 
             min= Math.min(smallest,arr[i]-k);
             // we find smellest element except first element 
              if(min<0) // if min is negative no change in answer
              continue;
              ans=Math.min(ans,max-min);
           }
           return ans;
       }
    };
     class MinimizeTheHeight {
    
}

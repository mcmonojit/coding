import java.util.*;
import java.io.*;
  
class Freq 
{ 
  
    static void countFreq(int arr[], int n) 
    { 
        Map<Integer, Integer> mp = new HashMap<>();
        int x=0;
  
        for (int i = 0; i < n; i++) 
        { 
            if (mp.containsKey(arr[i]))  
            { 
                mp.put(arr[i], mp.get(arr[i]) + 1); 
            }  
            else
            { 
                mp.put(arr[i], 1); 
            } 
        } 
        // Traverse through map and print frequencies 
        for (Map.Entry<Integer, Integer> entry : mp.entrySet()) 
        { 
            if(entry.getValue()>x)
                x=entry.getValue();
        }
        System.out.println("1 "+x);
    } 
  
    // Driver code 
    public static void main(String args[])throws IOException  
    { 
        BufferedReader b=new BufferedReader (new InputStreamReader(System.in));
        int t=Integer.parseInt(b.readLine());
        while(t>0)
        {
            t--;
            int n=Integer.parseInt(b.readLine());
            String s[]=b.readLine().split(" ");
            int a[]=new int[n];
            for(int i=0;i<n;i++)
            {
                a[i]=Integer.parseInt(s[i]);
            }
            Freq ob=new Freq();
            ob.countFreq(a,a.length);
            
        }
         
    } 
} 

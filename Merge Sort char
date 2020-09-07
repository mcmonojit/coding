void merge(int ar[], int l, int m, int r) 
    { 
        int n1 = m - l + 1; 
        int n2 = r - m; 
  
        int L[] = new int[n1]; 
        int R[] = new int[n2]; 
  
        for (int i = 0; i < n1; ++i) 
            L[i] = ar[l + i]; 
        for (int j = 0; j < n2; ++j) 
            R[j] = ar[m + 1 + j]; 
  
         
        int i = 0, j = 0; 
  
        int k = l; 
        while (i < n1 && j < n2) { 
            if (Character.compare(L[i],R[j])<=0) 
            { 
                ar[k] = L[i]; 
                i++; 
            } 
            else { 
                ar[k] = R[j]; 
                j++; 
            } 
            k++; 
        } 
  
        while (i < n1) { 
            ar[k] = L[i]; 
            i++; 
            k++; 
        } 
  
        
        while (j < n2) { 
            ar[k] = R[j]; 
            j++; 
            k++; 
        } 
    } 
  
    void sort(int arr[], int left, int right) 
    { 
        if (left < right) { 
            int mid = (left + right) / 2; 
  
            sort(arr, left, mid); 
            sort(arr, mid + 1, right); 
  
            merge(arr, left, mid, right); 
        } 
    } 
    
    
    
    Codechef ob=new Codechef();
    ob.sort(arr, 0, arr.length - 1);

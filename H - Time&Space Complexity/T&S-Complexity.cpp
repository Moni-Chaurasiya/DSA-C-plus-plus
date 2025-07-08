// Time complexity can only be calculated on same programming device
//Notation for different type of complexity --> Omega, Theta, Big O
/*
1. Big oh Notation --> upper bound

  [Time Complexity]

    a. for(int i=0;i<n;i++){
          cout<<"MoniChaurasiya\n";      --> n time loop will execute 
       }                                 Ans- O(n)     

    b. for(int i=0;i<n;i+=2){
          cout<<"MoniChaurasiya\n";      --> n/2 time loop will execute 
       }                                 Ans- O(n/2)  ~ O(n)

      ______________________________________________
     |  formula --> O(kn) = O(n)    (k is constant) |
     |______________________________________________|

      __________________________________________________
     |  formula --> O(n +- k) = O(n)    (k is constant) |
     |__________________________________________________|

      ________________________________________________________________________________
     |  formula --> O(k1n^m +- k2n^(m-1) +- k3n^(m-2) ... = O(n^m)    (k is constant) |
     |________________________________________________________________________________|

     Example --> O(5n^3 + 3) = O(n^3)
                 O(6n^2 - 8) = O(n^2)
                 O(6n^2 + n) = O(n^2)

    int a[n], b[m];
    for(int i=0; i<n; i++){
        a[i]++;                   --> n time loop will execute 
    }                             Ans- O(n)   
    
    for(int i=0; i<m; i++){
        b[i]++;                   --> m time loop will execute 
    }                             Ans- O(m) 

                Answer -->Time Complexity is  O(n+m)   

    a. for(int i=0;i<n;i++){             --> n time loop will execute 
        for(int j=0;j<n;j++){
          cout<<"MoniChaurasiya\n";      --> n time loop will execute 
        }
       }            
       Time Compexity is O(n*n) = O(n^2)   

    b. for(int i=0;i<n;i++){            
        for(int j=0;j<i;j++){
         cout<<"MoniChaurasiya\n";      
        }
       }            
       Time Compexity is O(n(n+1)/2) = O(n^2)     


    c. for(int i=0;i<n;i++){            
        for(int j=0;j<m;j++){
         cout<<"MoniChaurasiya\n";      
        }
        for(int j=0;j<m;j++){
         cout<<"MoniChaurasiya\n";      
        }
        for(int j=0;j<m;j++){
         cout<<"MoniChaurasiya\n";      
        }
       }            
       Time Compexity is O(n*(m+m+m) = O(n*3m) =O(nm)  
    
    d. int c=0;
       for(int i=0; i<=n; i+=k){
         c++;
       }

       i = 0, k, 2k, 3k, 4k, 5k, ... m*k   
       This loop will end when m*k > n
       Time complexity is O(n/k) = O(n)
    
    
       int c=0;
       for(int i=1; i<=n; i*=k){
         c++;
       }

       i = 1, k, k^2, k^3, k^4, k^5, ... k^x   
       This loop will end when k^x > n
       Taking log both side  log(k^x) > log(n)
                            = xlogk >log(n) => x = log(n)/log(x)
                            => O(x) = O(log n)  
       Time complexity is O(x) =O(log k n) =O(log n)

    e.  int c=0;
        for(int i=0;i<n;i++){            
         for(int j=i+1;j<m;j++){
          c++;      
         }
       }       

       total no : (m-1)+ (m-2)+ (m-3)+ (m-4)+ ... (m-(n+1))    --> no of term is n+1
       sum = n/2 [first Term + last Term]  
           = n/2 [m-1+m-n-1]  = n/2 [2m-2-n]
       Time Compexity is O(n/2 [2m-2-n]) = O(n*m -n^2)  =   O(m*n)      because m>n    


2. Big oh Notation --> upper bound

  [Space Complexity]
    
    a. int c=0;
       for(int i=0;i<n; i++){
         c++;                  --> Space Complexity is O(1) &  Time Complexity is O(n) 
       }

    b. int c[n];
       for(int i=0;i<n; i++){
         c[i]++;                  --> Space Complexity is O(n) &  Time Complexity is O(n) 
       }       

    c. vector<int> a;
       vector<int> b;
       for(int i=0;i<n; i++){
        for(int j=0;j<m; j++){
         a.push_back(10);                  --> Space Complexity is O(n*m) &  Time Complexity is O(n*m) 
         b.push_back(5);
        }
       }

    d. vector<int> a[n];
       vector<int> b[m];
       for(int i=0;i<n; i++){
        for(int j=0;j<m; j++){
         a[i].push_back(i);                  --> Space Complexity is O(n*m) &  Time Complexity is O(n*m) 
         b[j].push_back(j);
        }
       }       

      for (int i = 0; i < n; i++) {
          a[i].push_back(i);
      }
      for (int j = 0; j < m; j++) {
          b[j].push_back(j);
      }                                     --> Space Complexity is O(n+m) &  Time Complexity is O(n+m) 

    e. Space complexity of creating 2D matrix
        int arr[m][n];            --> space complexity is O(m*n)  

    f. int a[n], b[n], c[n];
       for(int i=0;i<n; i++){
         c++;                  --> Space Complexity is O(3n)=O(n) &  Time Complexity is O(n) 
       }        

    g. int a[n][n/2];
       for(int i=1;i<n; i*=2){
         for(int j=0;j<n/2; j++){
          a[i][j]++;          --> Space Complexity is O(n * n/2)=O(n^2) &  Time Complexity is O(n/2 * log 2 n) = O(n.logn)
         }    
        }    

    h. int c=0;
       for(i=0;i<n; i+=i){
        c++;   
       }     
       i= 1,2,4,8,16,32...
       i= 1, 2^1, 2^2, 2^3, 2^4, 2^5...2^x   --> x+1 term
       Time Complexity is O(x+1) =O(x)= O(log 2 n) = O(log n )  -->Ignore base
       we can write (log 2 n) instead of (log 3 n)  -->   O(log 3 n)= O(log 2 n/log 2 3)
                                                                    = O(log 3 2 . log 2 n)
                                                                    = O(k.log 2 n) = O(log n ) 

    i. int c=0;
       for(i=1;i<n; i+=i){
        for(j=0;j<i; j++){
         c++;   
        }
       }                    // Outer loop -> O(log n)  and Inner loop -> O(n)                                           

       i=1, j=0 -->1   
       i=2, j=0,1 -->2  
       i=4, j=0,1,2,3 -->4  
       i=8, j=0,1,2,3,4,5,6,7 -->8     

      = 1 + 2^1 + 2^2 + 2^3 + 2^4 + 2^5...+ 2^x   --> x+1 term   
                 [  sum of n term  = a[r^T-1]/r-1  ]
      = 1[2^(n+1)-1]/ 2-1  = 2^(n+1)-1
      = O(2^(n+1)-1) = O(2.2^n) = O(kn) = O(n)

      1+2+4+8+16...n/2 + n 
      (1+1)+2+4+8+16...n/2 + n -1
      (2+2)+4+8+16...n/2 + n -1
      (4+4)+8+16...n/2 + n -1
      (8+8)+16...n/2 + n -1
      (16+16)...n/2 + n -1
      32...n/2 + n -1
      Time Complexity =  O(2n-1) = O(n)


    j. int c=0;
      for(int i=1;i<=n;i*=2){        Time Complexity =  O(logn)
          for(int j=n;j>=0;j--){    Time Complexity =  O(n)
              c++;
          }
      }
      Total Time Complexity = O(n.logn)

    k. int c=0;
      for(int i=1;i*i<=n;i*=2){        Time Complexity = O(2^x * 2^x)= O(n)
          for(int j=0;j<i;j++){        
              c++;
          }
      }
      i=1,2,4,8,16...2^x   [2^x=root n]
      2^x * 2^x = n

      total iterations = 1+2+3+4+ ...2^x
                       = 2^(x-1) -1
      Time Complexity  = O(2^x) = O(root n)


    k. int c=0;
      for(int i=1;i*i<=n;i*=2){        Time Complexity = O(2^x * 2^x)= O(n)
          for(int j=n;j>i;j--){        
              c++;
          }
      }
      i=1,2,4,8,16...2^x   [2^x=root n]
      2^x * 2^x = n

      total j iterations = n-root n
      total number of iterations = (n-1)+(n-2)+(n-4)+(n-8)+ ...(n-2^x)
                                 = (n+n+n+n...)-(1+2+4+8+...2^x)
                                 =n(x+1)+[2^(x+1)-1)]
                                 = n.x+n - 2.2^x -1
      Time Complexity  = O(n.log 2 rootn + n - rootn)
                       = O(n.log root n)
                       = O(n.(1/2)log n)
                       = O(n.logn)

    l. int c=0;
      for(int i=1;i*i<n;i*=2){
        for(int j=0;j<i;j++){
          c++;
        }
      }   
      i= 1,2,4,8,16...2^x  [2^x=root n]      
      total iterations =1+2+3+4+...2^x
                       =2^(x+1)-1
      Time complexity = O(2^x)=O(root n)        

    m. int c=0;
      for(int i=1;i*i<n;i+=i){
        for(int j=n;j>i;j--){    -->[n-i]
          c++;
        }
      }   
      i= 1,2,4,8,16...2^x  [2^x=root n]     -->  x=log root n 
      total iterations =(n-1)+(n-2)+(n-3)+(n-4)+...(n-2^x)
                       = (n+n+n+n...) - (1+2+4+8+...2^x) --> both term is x+1 term
                       =n(x+1)-2^(x+1)-1
                       =n.x + n - 2.2^x + 1
      Time complexity = O(n.log 2 root n + n- root n)=O(n.log root n)   = O(n.1/2 .log n)  = O(n.logn)  

    n. int c=0;
      for(int i=1;i*i<n;i*=i){
          c++;
        }
      }   
      i=2,4,16,256,256*256...
      i=2,2^2,2^4,2^8,2^16...
      i=2^1,2^2^1,2^2^2,2^2^3,2^2^4...  [x+1 term]
      2^(2^x)=root n
      x=log(log root n)= log((1/2).log n)=log 1/2 + log(log n)
      time complexity = O(log(log n))

    o. Time Complexity of fibonacci number
    int fibo(int n){
      if(n==1 || n==2) return 1;
      return fibo (n-1)+ fibo (n-2);
    }  
    for n
    1+2^1+2^2+2^3+2^4...2^(n-1) = 1(2^n-1)/(2-1) = 2^n-1
    Time Complexity of fibonacci series is O(2^n)

    p. Time Complexity of GCD(a,b) is O(log(a+b))
                                                    

*/

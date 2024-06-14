 #include<iostream>
 #include<vector>
 #include<algorithm>
 #include<math.h>
 using namespace std;
 
 
 
 vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> v;
        if (x < arr[0]) {
            for (unsigned int i = 0; i < v.size(); i++) {
                v.push_back(arr[i]);
            }
            return v;
        }
        if (x > arr[n - 1]) {
            for (unsigned int i = v.size() - 1; i >= 0; i--) {
                v.push_back(arr[i]);
            }
            return v;
        };
        int l = 0;
        int h = n - 1;
        bool flag = false;
        int ll;
        int hh;
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (x == mid) {
                flag = true;
                 ll = mid - 1;
                 hh= mid + 1;
                v.push_back(x);

            } else if (x > mid) {
                l = mid + 1;

            } else {
                h = mid - 1;
            }
        }
        if (flag == false) {
            ll = h;
            hh = l;
        }
        while ( v.size() != k && ll>=0 && hh<=n-1) {
              int d1=abs(x-arr[ll]);
              int d2= abs(x-arr[hh]);

            if (d1<=d2) {
                v.push_back(arr[ll]);
                ll--;
                if (ll == -1) {
                    v.push_back(hh);
                    hh++;
                }
            } else {
                v.push_back(hh);
                hh++;
                if (hh == n) {
                    v.push_back(ll);
                    ll--;
                }
            }
        }
        sort(v.begin(),v.end());
        return v;
    }

    int main(){
        vector<int> arr(5);
      for(unsigned int i=0;i<arr.size();i++){      
         arr.push_back(i);
      }
      int  k = 4; 
       int  x = 3 ;
       findClosestElements(arr,k,x);
    }
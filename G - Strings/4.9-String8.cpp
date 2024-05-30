// Valid Anagram  -->  Leetcode 242
class Solution {
public:
    bool isAnagram(string s, string t) {
         sort(s.begin(),s.end());
         sort(t.begin(),t.end());
         if(s==t) return true;
         else return false;
    }
};



// Longest Common Prefix --> Leetcode 14
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size();
 
        if(len==1) return strs[0];
        sort(strs.begin(),strs.end());
        string first= strs[0];
        string last = strs[len-1];
        string s="";
        for(int i=0;i<min(first.length(),last.length());i++){
         if(first[i]==last[i]){
            s += first[i];
         }else break;
        }
        return s;
    }
};



// Isomorphic Strings  --> Leetcode 205
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int> v(150,1000);
        for(int i=0; i<s.size();i++){
            int idx=(int)s[i];
            if(v[idx]==1000) v[idx]=s[i]-t[i];
            else if (v[idx]!=(s[i]-t[i])) return false;
        }
          for(int i=0;i<150;i++){
            v[i]=1000;
          }
          for(int i=0; i<s.size();i++){
            int idx=(int)t[i];
            if(v[idx]==1000) v[idx]=t[i]-s[i];
            else if (v[idx]!=(t[i]-s[i])) return false;
        }
        return true;
    }
};


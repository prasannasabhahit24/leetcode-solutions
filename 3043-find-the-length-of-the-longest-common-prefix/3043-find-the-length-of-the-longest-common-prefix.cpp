class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
          unordered_set<int> pref;

          for(int n:arr1){
            while(n>0){
               pref.insert(n);

                n/=10;
            }
          }

          int res=0;

          for(int i:arr2){
            while(i>0){
                  if(pref.count(i)){   //if digit exost in set
                    res=max(res,(int)to_string(i).length());
                    break;
                  }
                  i/=10;
            }
          }
          return res;
    }
};
class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        
        // sort even indices
        for(int i = 0; i < s1.length(); i += 2){
            for(int j = i + 2; j < s1.length(); j += 2){
                if(s1[i] > s1[j]){
                    swap(s1[i], s1[j]);
                }
            }
        }

        // sort odd indices
        for(int i = 1; i < s1.length(); i += 2){
            for(int j = i + 2; j < s1.length(); j += 2){
                if(s1[i] > s1[j]){
                    swap(s1[i], s1[j]);
                }
            }
        }

        // do same for s2
        for(int i = 0; i < s2.length(); i += 2){
            for(int j = i + 2; j < s2.length(); j += 2){
                if(s2[i] > s2[j]){
                    swap(s2[i], s2[j]);
                }
            }
        }

        for(int i = 1; i < s2.length(); i += 2){
            for(int j = i + 2; j < s2.length(); j += 2){
                if(s2[i] > s2[j]){
                    swap(s2[i], s2[j]);
                }
            }
        }

        return s1 == s2;
    }
};
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        sort(skill.begin(),skill.end());

        int l=0;
        int r=n-1;
         long long pro=0;
        long long answer=skill[l]+skill[r];

        while(l < r){
            if(skill[l]+skill[r]!=answer){
                return -1;
            }
            else {
                pro+=skill[l]*skill[r];
                l++;
                r--;
            }
        }

        return pro;
    }
};
class Solution {
private:
int valley(int i){
    string s=to_string(i);
          int cnt=0;
    for(int i=1;i<s.length()-1;i++){
        if(s[i]>s[i-1] && s[i]>s[i+1]){
            cnt++;
        }
        else if(s[i]<s[i-1] && s[i]<s[i+1]){
            cnt++;
        }
    }
    return cnt;
}
public:
    int totalWaviness(int num1, int num2) {
        int cnt=0;
        for(int i=num1;i<=num2;i++){
            cnt+=valley(i);
        }
        return cnt;
    
    }
};
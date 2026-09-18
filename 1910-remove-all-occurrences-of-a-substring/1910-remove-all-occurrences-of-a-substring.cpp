class Solution {
public:
    string removeOccurrences(string s, string part) {
       while(s.find(part) != string::npos){
        int pos=s.find(part);  //fts find fst occurence then remove it
        s.erase(pos,part.size());
         
       }   

       return s;
    }
};
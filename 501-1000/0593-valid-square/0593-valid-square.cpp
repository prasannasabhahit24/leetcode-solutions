class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        //formula=(x1-x2)^2+(y1-y2)^2

        vector<int> d;
        d.push_back((p1[0]-p2[0])*(p1[0]-p2[0])+(p1[1]-p2[1])*(p1[1]-p2[1]));
        d.push_back((p1[0]-p3[0])*(p1[0]-p3[0])+(p1[1]-p3[1])*(p1[1]-p3[1]));
        d.push_back((p1[0]-p4[0])*(p1[0]-p4[0])+(p1[1]-p4[1])*(p1[1]-p4[1]));
        d.push_back((p2[0]-p3[0])*(p2[0]-p3[0])+(p2[1]-p3[1])*(p2[1]-p3[1]));
        d.push_back((p2[0]-p4[0])*(p2[0]-p4[0])+(p2[1]-p4[1])*(p2[1]-p4[1]));
        d.push_back((p3[0]-p4[0])*(p3[0]-p4[0])+(p3[1]-p4[1])*(p3[1]-p4[1]));
        sort(d.begin(),d.end());
        return d[0] > 0 && d[0]==d[1] && d[1]==d[2] && d[2]==d[3] &&  d[4]==d[5];
    }
};
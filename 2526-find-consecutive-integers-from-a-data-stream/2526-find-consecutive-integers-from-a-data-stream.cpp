class DataStream {
public:
    int value;
    int k;
    int cnt;
    DataStream(int value, int k) {
        this->value=value;
        this->k=k;
        cnt=0;
    }
    
    bool consec(int num) {
        if(num==value){
            cnt++;
        }
        else {
            cnt=0;
        }

        return cnt >=k;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */
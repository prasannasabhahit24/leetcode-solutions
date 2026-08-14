class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(),nums1.end());
        
        int n=nums1.size();
        if(n % 2 !=0){
            int ans=n/2;
            return nums1[ans];
        }
        else {

            int i=nums1.size()/2;
            double res=(nums1[i-1]+nums1[i])/2.0;

            return res;
        }

        return 0;
    }
};
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res(m+n);
        int id=0, i=0, j=0;

        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                res[id]=nums1[i];
                i++;
                id++;
            }
            else{
                res[id]=nums2[j];
                j++;
                id++;
            }
        }

        while(j<n){
            res[id]=nums2[j];
            j++;
            id++;
        }

        while(i<m){
            res[id]=nums1[i];
            i++;
            id++;
        }

        for(int k=0;k<nums1.size();k++){
            nums1[k]=res[k];
        }

    }
};
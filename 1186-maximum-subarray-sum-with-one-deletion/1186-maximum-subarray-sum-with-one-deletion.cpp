class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int noDel=arr[0],oneDel=INT_MIN,res=arr[0],v;

        for(int i = 1; i < arr.size(); i++){
            int oldNoDel=noDel;
            int oldOneDel=oneDel;

            noDel=max(oldNoDel+arr[i],arr[i]);

            if(oldOneDel==INT_MIN) v=arr[i];
            else v=oldOneDel+arr[i];

            oneDel=max(v,oldNoDel);
            res=max(res,max(noDel,oneDel));
        }

        return res;
    }
};
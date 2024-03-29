class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int e = nums1.size()-1;
        int i=m-1;
        int j=n-1;
        if(m!=0){
         while(i>=0 && j>=0){
            cout<<nums1[0];
            if(nums2[j]>nums1[i]){
                nums1[e]=nums2[j];
                cout<<nums1[0];
                j--;
                e--;
            }
            else{
                int temp = i;
                while(temp>=0&&nums2[j]<nums1[temp]){
                    nums1[temp+1] = nums1[temp];
                    temp--;
                }
                nums1[temp+1] = nums2[j];
                j--;
                i++;
            }
            }

        }
        else{
            for(int k=0;k<n;k++){
                nums1[k] = nums2[k];
            }
        }
    }
};
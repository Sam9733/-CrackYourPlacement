class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        int i=n-1,j=n+m-1,k=m-1;

        if(m==0)
        return ;

        if(n==0)
        {
            nums1=nums2;
        }

        while(i>=0&&j>=0&&k>=0)
        {
            if(nums1[i]<nums2[k])
        {
            nums1[j]=nums2[k];
            j--;
            k--;
        }
        
        else
        {
            nums1[j]=nums1[i];
            nums1[i]=INT_MIN;
            i=max(0,i-1);
            j--;
        }
        }




    }
};
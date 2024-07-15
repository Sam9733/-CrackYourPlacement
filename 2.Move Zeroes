class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=0;
        while(i<n)
        {
            if(nums[j]==0)
            {
                cout<<i<<endl;
                nums.push_back(0);
                nums.erase(nums.begin()+j);
            }
            else
            j++;
                i++;
        }
    }
};
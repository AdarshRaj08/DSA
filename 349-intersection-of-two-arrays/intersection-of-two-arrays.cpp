class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0,j=0;
        vector<int> ans;

        while(i < m && j < n)
        {
            if(nums1[i] == nums2[j])
            {
                if(ans.size()==0 || ans.back() != nums1[i])
                    ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] > nums2[j])
                j++;
            else
                i++;
        }

        return ans;


        // // other method
        // unordered_set<int> st1(begin(nums1),end(nums1));
        // vector<int>st2;

        // for(int num : nums2)
        // {
        //     if(st1.find(num) != st1.end())
        //         st2.push_back(num);
        //         st1.erase(num);             // erasing for removing problem of the duplicate
        // }

        // return st2;
    }
};
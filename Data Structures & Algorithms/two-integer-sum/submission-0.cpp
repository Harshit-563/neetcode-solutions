class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> st;
        vector<int> a;
        for(int i=0;i<nums.size();i++){
            if(st.find(target-nums[i])==st.end()){
                st[nums[i]]=i;
            }
            else{
                a.push_back(st[target-nums[i]]);
                a.push_back(i);
            }
        }
        return a;
    }
};

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        map<int,int> mp;
        for(int i=0; i<nums1.size(); i++){
            mp[nums1[i]]++;
        }
        map<int,int> ans;
        for(int i=0; i<nums2.size(); i++){
            if(mp.find(nums2[i])!= mp.end()){
                ans[nums2[i]]++;
            }
        }
        for(auto i:ans){
            v.push_back(i.first);
        }
        return v;
    }
};

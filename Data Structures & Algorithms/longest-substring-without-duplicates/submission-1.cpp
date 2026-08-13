class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;
        int left=0,ans=0;
        for (int right=0;right<s.size();right++){
            if(mpp.count(s[right])){
                left=max(left,mpp[s[right]]+1);
            }
             mpp[s[right]] = right;
             ans = max(ans, right - left + 1);

        }
        return ans;
    }
};

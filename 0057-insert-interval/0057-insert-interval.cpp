class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval)
     {
        intervals.push_back(newInterval);
        if(intervals.size() == 0)
            return {};
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        int n = 0;
        ans.push_back(intervals[0]);
        for(auto interval : intervals) {
            if(interval[0] <= ans[n][1]) {
                ans[n][1] = max(interval[1], ans[n][1]);
            }
            else {
                ans.push_back(interval);
                n++;
            }
        }
        return ans;
    }
};
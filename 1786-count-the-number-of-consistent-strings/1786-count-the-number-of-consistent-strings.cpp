class Solution {
public:
int countConsistentStrings(string allowed,vector<string>& words) 
{
        map<char,int>mp;
        for(auto it:allowed)
        {
            mp[it]=1;
        }
        int ct=words.size();
        for(auto it:words)
        {
            for(auto i:it)
            {
                if(mp[i]!=1)
                {
                    ct--;
                    break;
                }
            }
        }
        return ct;
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) 
    {
          if (str.empty()) return "";
        string prefix = str[0];
        for (string s : str)
            while (s.find(prefix) != 0)
                prefix = prefix.substr(0, prefix.length() - 1);
        return prefix;
    }
};
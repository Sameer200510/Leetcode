class Solution {
public:
    int countKeyChanges(string s) {
int n=s.length();
int count=0;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]==s[i+1]||s[i]==s[i+1]+32||s[i]==s[i+1]-32)
            {
                count++;
            }



        }
        return n-count-1;
    }
};
class Solution {
public:
    bool checkIfPangram(string sentence)
     {
        bool used[26]={false};
        for(char c:sentence)
        {
            if(c>='a'&& c<='z')
            {
            used[c-'a']=true;
            }
            else if(c>='A' && c<'Z')
            {
            used[c-'A']=true;
            }
        }

        for(bool b:used)
        {
            if(!b)
            {
                return false;
            }
        }

        return true;
    }
};
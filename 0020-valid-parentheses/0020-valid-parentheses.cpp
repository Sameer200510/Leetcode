class Solution 
{
public:
    bool isValid(string str) 
    {
        stack<char> a;

        for(int i = 0 ; i < str.length() ; i++) 
        {
            if(str[i] == '(') 
            {
                a.push(')');
            }

            else if(str[i] == '{') 
            {
                a.push('}');
            }

            else if(str[i] == '[') 
            {
                a.push(']');
            }

            else if(str[i] == ')' || str[i] == '}' || str[i] == ']') 
            {
                if(a.empty() || a.top() != str[i]) 
                {
                    return false;
                }
                a.pop();
            }
        }   
        if(a.empty()) 
        {
            return true;
        }
        return false;
    }
};
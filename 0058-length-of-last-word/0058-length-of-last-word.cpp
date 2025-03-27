class Solution 
{
public:
    int lengthOfLastWord(string s) 
    {
     int currentLength=0,prevLength=0;
        for(auto i:s) 
        {
            if(i!=' ') 
            {
                currentLength++;
            }
            else 
            {
                if(currentLength != 0) 
                {
                    prevLength=currentLength;
                    currentLength=0;
                }
            }
        }
        if(currentLength != 0) 
        {
            prevLength=currentLength;
        }
        return prevLength;   
    }
};
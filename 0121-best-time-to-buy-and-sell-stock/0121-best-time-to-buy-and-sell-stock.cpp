class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
        int min=0;
        int max=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]-prices[min]>max)
            {
                max=prices[i]-prices[min];
            }
            else if(prices[min]>prices[i])
            {
                min=i;
            }
        }
        return max;
    }
};
class Solution 
{
public:
    vector<int> findEvenNumbers(vector<int>& digits) 
    {
         vector<int> count(10, 0);
        for (int digit : digits) 
        {
            count[digit]++;
        }

        vector<int> result;
        for (int num = 100; num <= 998; num += 2) 
        {
            int a = num / 100;
            int b = (num / 10) % 10;
            int c = num % 10;
            vector<int> tempCount = count;
            if (--tempCount[a] < 0) continue;
            if (--tempCount[b] < 0) continue;
            if (--tempCount[c] < 0) continue;
            result.push_back(num);
        }
        return result;
    }
};
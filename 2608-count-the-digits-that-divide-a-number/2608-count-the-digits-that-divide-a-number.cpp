class Solution {
public:
    int countDigits(int num) 
    {
     int ans = 0;
        int n = num;
        while (n) {
            int digit = n % 10;
            if (digit != 0 && num % digit == 0) ans++;  
            n /= 10;
        }
        return ans;   
    }
};
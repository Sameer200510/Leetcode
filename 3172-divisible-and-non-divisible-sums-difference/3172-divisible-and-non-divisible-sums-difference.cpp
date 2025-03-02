class Solution {
public:
    int differenceOfSums(int n, int m) 
    {
        long sum1 = 0;
        long sum2 = 0;

        for(int i=1; i<=n; i++){
            if(i%m){
                sum1 += i;
            }
            else
                sum2 += i;
        }
        return sum1-sum2;
    }
};
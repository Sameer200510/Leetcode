class Solution {
public:
    string convertDateToBinary(string date) 
    {
        string year = date.substr(0,4);
        string month = date.substr(5,2);
        string day = date.substr(8,2);

        int yr = stoi(year);
        int mon = stoi(month);
        int dy = stoi(day);

        int i = 0;
        long long int updatedYear = 0;

        while(yr!=0){
            int digit = yr%2;
            updatedYear = updatedYear + digit*pow(10,i++);
            yr = yr/2;
        }

        long long int updatedMonth = 0;
        i = 0;
        while(mon!=0)
        {
            int digit = mon%2;
            updatedMonth = updatedMonth + digit*pow(10,i++);
            mon = mon/2;
        }

        long long int updatedDay = 0;
        i = 0;
        while(dy!=0){
            int digit = dy%2;
            updatedDay = updatedDay + digit*pow(10,i++);
            dy = dy/2;
        }

        string ans = to_string(updatedYear) + "-" + to_string(updatedMonth) + "-" + to_string(updatedDay);
        return ans;
    }
};
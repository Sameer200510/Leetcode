class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        vector<int> result;

        for (int i = 0; i < words.size(); i++)
        {
            const string currentWord = words[i];
            
            if (currentWord.find(x) != string::npos) 
            {
                result.push_back(i);
            }
        }

        return result;
    }
};
class Solution {
public:

    bool allCapital(string word)
    {
        for(char &ch : word)
        {
            if(ch > 'Z' || ch < 'A')
                return false;
        }
        return true;
    }

    bool allSmall(string word)
    {
        for(char &ch : word)
        {
            if(ch > 'z' || ch < 'a')
                return false;
        }
        return true;
    }
    bool detectCapitalUse(string word) {
        
        if(allCapital(word) || allSmall(word) || allSmall(word.substr(1)))
            return true;
        
        return false;
    }
};
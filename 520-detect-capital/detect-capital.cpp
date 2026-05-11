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


    int countCapital(string word)
    {
        int count = 0;
        for(char &ch : word)
        {
            if(ch >= 'A' && ch <= 'Z')
                count++;
        }
        return count;
    }


    bool detectCapitalUse(string word) {

        // ***************** Smart Method **************************

        int n = word.length();
        int count = countCapital(word);

        if(count == 1)
        {
            if(word[0] >= 'A' && word[0] <= 'Z')
                return true;
        }
        if(count == 0 || count == n)
            return true;
        
        return false;
        


        // ***************** Traditional Method **********************
        
        // if(allCapital(word) || allSmall(word) || allSmall(word.substr(1)))
        //     return true;
        
        // return false;
    }
};
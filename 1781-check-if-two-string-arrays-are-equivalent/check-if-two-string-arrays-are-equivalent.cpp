class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1;
        string s2;

        for(string s : word1)
        {
            s1 += s;
        }
        for(string s : word2)
        {
            s2 += s;
        }
        int n1 = s1.length();
        int n2 = s2.length();

        if(n1 != n2)
            return false;
        else
        {
            for(int i=0; i<n1; i++)
            {
                if(s1[i] != s2[i])
                    return false;
            }
        }
        return true;

    }
};
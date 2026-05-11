class Solution {
public:
    string makeGood(string s) {
        int n = s.length();

        if(n == 1)
        {
            return s;
        }

        for(int i=0; i<n-1; i++)
        {
            if((s[i+1] == s[i] + 32) || (s[i+1] == s[i] - 32))
            {
                s.erase(i,2);
                n = s.length();
                i=-1;
            }
        }

        return s;
    }
};
class Solution {
public:
    bool countFreq(string s)
    {
        vector<int> freq(26,0);

        for(char &ch : s)
        {
            int idx = ch - 'a';
            freq[idx]++;

            if(freq[idx] > 1)
                return true;
        }
        return false;
    }

    bool buddyStrings(string s, string goal) {
        int n = s.length();
        int m = goal.length();
        int count = 0;

        if(n != m)
            return false;
        
        if( s == goal)
        {
            return countFreq(s);
        }

        vector<int>index;
        
        for(int i=0; i < n; i++)
        {
            if(s[i] != goal[i])
            {
                index.push_back(i);
            }
        }

        if(index.size() != 2)
            return false;

        swap(s[index[0]],s[index[1]]);

        
        return s == goal;
    }
};
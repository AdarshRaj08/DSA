class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n1 = word1.length();
        int n2 = word2.length();

        if(n1 != n2 )
            return false;
        
        vector<int> freq1(26);
        vector<int> freq2(26);

        for(int i=0; i<n1; i++)
        {
            char ch1 = word1[i];
            char ch2 = word2[i];

            int idx1 = ch1 - 'a';
            int idx2 = ch2 - 'a';

            freq1[idx1]++;
            freq2[idx2]++;
        }

        // check rule 1 that whether all element is present or not

        for(int i=0; i<26; i++)
        {
            if(freq1[i] != 0 && freq2[i] != 0) continue;

            if(freq1[i] == 0 && freq2[i] == 0) continue;

            return false;
        }

        sort(begin(freq1),end(freq1));
        sort(begin(freq2),end(freq2));

        // check rule 2 ki frequency same hai 
        return freq1 == freq2;
    }
};
class Solution {
public:
    bool isVowel(char ch)
    {
        ch = tolower(ch);

        return (ch=='a' || ch=='e' || ch=='i' ||
                ch=='o' || ch=='u');
    }

    bool halvesAreAlike(string s) {
        int n = s.length();
        int a = 0;
        int b = 0;

        for(int i=0; i<n; i++)
        {
            if(i < n/2)
            {
                if(isVowel(s[i]))
                    a++;
            }
            else
            {
                if(isVowel(s[i]))
                    b++;
            }
        }

        return a==b;
        
    }
};
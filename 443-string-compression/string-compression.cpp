class Solution {
public:
    int compress(vector<char>& chars) {

        int count = 0;

        string s = "";


        for(char &ch : chars)
        {
            if(s.empty())
            {
                s.push_back(ch);
                count++;
            }
            else
            {
                if(s.back() == ch)
                    count++;
                else
                {
                    if(count != 1)
                        s += to_string(count);
                        // s.push_back(to_string(count));
                    s.push_back(ch);
                    count = 1;
                }
            }
        }
        if(count != 1)
            s += to_string(count);
        int ans = s.length();
        reverse(s.begin(),s.end());

        for(int i=0; i<ans; i++)
        {
            chars[i] = char(s.back());
            s.pop_back();
        }

        return ans;



























        // int n = chars.size();

        // int index = 0;
        // int i = 0;

        // while(i<n)
        // {
        //     char curr_char = chars[i];
        //     int count = 0;

        //     // find count of duplicates
        //     while(i < n && chars[i] == curr_char)
        //     {
        //         count++;  
        //         i++;
        //     } 

        //     // now do the assign work
        //     chars[index] = curr_char;
        //     index++; 

        //     if(count > 1)
        //     {
        //         string count_str = to_string(count);
        //         for(char &ch : count_str)
        //         {
        //             chars[index] = ch;
        //             index++;
        //         }
        //     }
        // }

        // return index;

    }
};
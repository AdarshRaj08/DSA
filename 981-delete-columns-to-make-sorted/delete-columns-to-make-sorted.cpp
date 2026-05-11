class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int row = strs.size();
        int col = strs[0].length();
        int delcol = 0;

        for(int c = 0; c < col; c++)
        {
            for(int r = 0; r < row-1; r++)
            {
                if(strs[r+1][c] < strs[r][c])
                {
                    delcol++;
                    break;
                }
            }
        }

        return delcol;
    }
};
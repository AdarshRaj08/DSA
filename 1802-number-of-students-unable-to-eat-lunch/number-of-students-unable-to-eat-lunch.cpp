class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {

        // ************ GOOD APPROACH ****************

        int n = students.size();
        int arr[2] = {0};

        for(int &stu : students)
        {
            arr[stu]++;
        }

        for(int i=0; i<n; i++)
        {
            if(arr[sandwiches[i]] > 0)
            {
                arr[sandwiches[i]]--;
            }
            else
                return n-i;
        }
        return 0;

        // int count = 0;

        // while(count < students.size())
        // {
        //     if(students[0] == sandwiches[0])
        //     {
        //         students.erase(students.begin());
        //         sandwiches.erase(sandwiches.begin());
        //         count = 0;
        //     }
        //     else
        //     {
        //         students.push_back(students[0]);
        //         students.erase(students.begin());
        //         count++;
        //     }
        // }
        // return students.size();
    }
};
// brief explanation.
//     the idea is to initialize a static vector. have 2 pointers which shows positive and negative values in the array index, which is incremented by +2 (for alternative numbers.) everytime the number is added, the pointer moves 2 steps ahead, filling the static array/vector.


#include<bits/stdc++.h>
using namespace std;

// this function prints any array given.
void print(vector<int> v)
{
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}


int main()
{
    // sample array for the question.
    vector<int> nums = {28,-41,22,-8,-37,46,35,-9,18,-6,19,-26,-37,-10,-9,15,14,31};

    // answer logic starts here.
    int pos = 0; int neg = 1;                    // two pointers
    vector<int> ans(nums.size(), 0);             // resulting vector

    for (int i = 0 ; i < nums.size(); i++)       // for loop through the given vector
    {
        if (nums[i] > 0)
        {
            ans[pos] = nums[i];
            pos += 2;                            // incrementing the pointer by 2
        }
        else
        {
            ans[neg] = nums[i];
            neg += 2;                            // incrementing the pointer by 2
        }
    }
    print(ans);    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

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
    vector<int> nums = {28,-41,22,-8,-37,46,35,-9,18,-6,19,-26,-37,-10,-9,15,14,31};

    int pos = 0; int neg = 1;

    vector<int> ans(nums.size(), 0);

    for (int i = 0 ; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            ans[pos] = nums[i];
            pos += 2;
        }
        else
        {
            ans[neg] = nums[i];
            neg += 2;
        }
    }
    print(ans);

    
    return 0;
}
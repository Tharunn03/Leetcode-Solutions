// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]

// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]

// Constraints:
//     2 <= nums.length <= 10^4
//     -10^9 <= nums[i] <= 10^9
//     -10^9 <= target <= 10^9
//     Only one valid answer exists.

// Solution:
//     we use a hashmap and we check if the "target-number" exist in the hashmap before asigning in the map. if it exists, we return the values of the current index and the index value stored for the key of "target-number".

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // example input values;
    vector<int> nums = {2,7,11,15}; int target = 9;

    // map used for asigning
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        // checking the condition.
        if (m.find(target-nums[i]) != m.end())
        {
            cout << i << " " << m[target-nums[i]];
            break;
        }
        m[nums[i]] = i;
    }

    return 0;
}
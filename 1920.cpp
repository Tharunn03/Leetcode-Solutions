// Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.

// A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).

// Example 1:

// Input: nums = [0,2,1,5,3,4]
// Output: [0,1,2,4,5,3]
// Explanation: The array ans is built as follows: 
// ans = [nums[nums[0]], nums[nums[1]], nums[nums[2]], nums[nums[3]], nums[nums[4]], nums[nums[5]]] 
//     = [nums[0], nums[2], nums[1], nums[5], nums[3], nums[4]] = [0,1,2,4,5,3]

// Example 2:

// Input: nums = [5,0,1,2,3,4]
// Output: [4,5,0,1,2,3]
// Explanation: The array ans is built as follows:
// ans = [nums[nums[0]], nums[nums[1]], nums[nums[2]], nums[nums[3]], nums[nums[4]], nums[nums[5]]]
//     = [nums[5], nums[0], nums[1], nums[2], nums[3], nums[4]]
//     = [4,5,0,1,2,3]

// Constraints:

//     1 <= nums.length <= 1000
//     0 <= nums[i] < nums.length
//     The elements in nums are distinct.


// solution:
//     solving with extra n space is very easy. we can use an array to store as expected.
//     but solving without extra space is the real game here.
//     we need to use recursive call stack to swap the elements withing the array, without taking any extra space.

//     wherever we see the data and the index are not same, we take it into a function where it swaps the index with that value in that position.
//     eg: if the given array is like this:
//     [0,2,1,5,3,4]

//     first it will take the number which does not match the index.(we ignore which matches the index).
//     [0,2,1,5,3,4]
//        ^
//     this index is passed into the function and it takes the data at the index and go to that location considering it as an index.
//     [0,2,1,5,3,4] and these two values (2 and 1) are swapped.
//          ^
//     and the resulting array will look like, [0,1,2,5,3,4].

//     before moving to next iteration we need to check the data == index, to make sure the value gets assigned.

#include<bits/stdc++.h>
using namespace std;

void func(vector<int>& arr, int ptr)
{
    int temp = arr[ptr];
    swap(arr[ptr], arr[temp]);
    if (arr[ptr] != ptr)
    {
        func(arr, ptr);
    }
    else
    {
        return;
    }
}

void print(vector<int>& arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
}

int main()
{
    // input array
    vector<int> nums = {0,2,1,5,3,4};

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != i)
        {
            func(nums, i);
        }
    }

    print(nums);


    return 0;
}
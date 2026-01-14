#include <iostream>
#include <vector>
using namespace std;

int minimumSumSubarray(vector<int> &nums, int l, int r)
{
    int n = nums.size();
    int found = false;
    int minsum = INT_MAX;

    for (int i = l; i <= r; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + nums[j];
            if (j >= i - 1)
            {
                if (sum > 0)
                {
                    minsum = min(minsum, sum);
                    found = true;
                }
                sum = sum - nums[j - i + 1];
            }
        }
    }
    return found ? minsum : -1;
}


int main(){
    vector<int>nums={1,-2,3,-1,4};
    int l=2;
    int r=3;
    cout<<"sum is: "<<minimumSumSubarray(nums,l,r);
}
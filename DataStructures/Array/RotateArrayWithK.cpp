#include<iostream>
#include<vector>
using namespace std;
 
// BRUTE_FORCE
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        for(int i=0;i<k;i++){
            int last=nums[n-1];
            for(int j=n-1;j>0;j--){
                nums[j]=nums[j-1];
            }
            nums[0]=last;
        }
        
    };

int main() {
    vector<int> nums = {1, 2, 3, 4};
    int k = 6;

    rotate(nums, k);

    cout << "Rotated array: ";
    for (int x : nums) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}


// OPTMIZED_SOLUTION
//  int n=nums.size();
//         k=k%n;
//         reverse(nums.begin(),nums.end());
//         reverse(nums.begin(),nums.begin()+k);
//         reverse(nums.begin()+k,nums.end());
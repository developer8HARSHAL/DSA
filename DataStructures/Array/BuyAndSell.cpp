#include<iostream>
#include<vector>
using namespace std;

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int bp=prices[0];
        int sp=0;
        int mx=0;

        for(int i=0;i<n-1;i++){
            if(prices.size()==0) return 0;
            if(prices[i+1]<bp){
                bp=prices[i+1];

            }
            else{
                sp=prices[i+1]-bp;
                mx=max(sp,mx);
            }
        }
        return mx;
        
    }

int main(){
    vector<int>prices={7,1,5,3,6,4};
    cout<<"maximum profit: "<<maxProfit(prices);

}






//BRUTE_FORCE o(n^2)

// int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         int mx=0;
//         int pr=0;

//         for(int i=0;i<n;i++){
//             for (int j=i+1;j<n;j++){
//                 pr=prices[j]-prices[i];
//                 mx=max(pr,mx);
//             }
//         }
//         return mx;
        
//     }
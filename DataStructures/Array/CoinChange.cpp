#include<iostream>
#include<vector>
using namespace std;

    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,amount+1);
        dp[0]=0;

        for(int i=1;i<=amount;++i){
            for(int coin:coins){
                if(i-coin>=0){
                    dp[i]=min(dp[i],1+dp[i-coin]);
                }
            }
        }
        return dp[amount]>amount? -1:dp[amount];
        
    }

int main(){
    vector<int>coins={1,6,7,9,11};
    int amount=13;
    cout<<"minimum no of coins are: "<<coinChange(coins,amount);
}
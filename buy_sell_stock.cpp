#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices){
    int profit = 0;
    int bestBuy = prices[0];

    for(int i=1; i < prices.size(); i++){
        if(prices[i]>bestBuy){
            profit = max(profit, prices[i]-bestBuy);
        }
        bestBuy=min(prices[i],bestBuy);
    }
    return profit;
}
int main(){
    vector<int> prices ={7,1,3,5,6,4};
    int gain = maxProfit(prices);
    cout<<gain<<endl;
    return 0;
}
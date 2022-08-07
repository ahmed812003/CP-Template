#include <bits/stdc++.h>
using namespace std;

#define ll long long

int updateBit (int n , int pos , int val){
    int mask= ~(1<<pos);
    n=n & mask;
    return (n|(val<<pos));
}

int getBit (int n , int pos){
    return ((n & (1<<pos))!=0);
}

int setBit1 (int n , int pos){
    return (n | (1<<pos));
}

int setBit0 (int n , int pos){
    return (n & ~(1<<pos));
}

int flipBit (int n , int pos){
    return (n ^ (1<<pos));
}

int clearBit (int n , int pos){
    int mask=~(1<<pos);
    return (n & mask);
}

int findXOR(int n)
{
    int mod = n % 4;
    if (mod == 0)
        return n;
    else if (mod == 1)
        return 1;
    else if (mod == 2)
        return n + 1;
    else if (mod == 3)
        return 0;
}

vector<vector<int>> bitmask (int n){
    vector<int>temp;
    vector<vector<int>>ans;
    for(int mask=0 ; mask<(1<<n) ; mask++){
        for(int i=0 ; i<n ; i++){
            if(getBit(mask , i)){
                temp.push_back(1);
            }
            else{
                temp.push_back(0);
            }
        }
        ans.push_back(temp);
        temp.clear();
    }
    return ans;
}

int main()
{    
    return 0;
}

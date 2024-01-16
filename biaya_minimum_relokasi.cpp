#include <iostream>
#include <map>
#include <set>
#include <string>
#include <iterator>

using namespace std;

map<int, int> cost;
map<int, int> blok;

void blok_biaya_terendah(map<int,int> blok){
//CODE
    int minCost = 1000;
    int minBlock = -1;

    for (const auto& entry : blok) {
        int targetBlock = entry.second;
        int currentCost = 0;

        for (const auto& house : blok) {
            int distance = abs(house.second - targetBlock);
            currentCost += cost[distance];
        }
}

int main(){

//rule pindah rumah
cost[1]=1;
cost[2]=0;

return 0;
}

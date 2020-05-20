#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, pair<int, int>> customPair;

vector<int> mergeKSortedArrays(vector<vector<int>> arr){
    vector<int> result;
    priority_queue<customPair, vector<customPair>, greater<customPair>> pq;
    for(int i=0; i<arr.size(); i++){
        pq.push({arr[i][0], {i,0}});
    }
    while(!pq.empty()){
        customPair curr=pq.top();
        pq.pop();
        int x=curr.second.first;
        int y=curr.second.second;
        result.push_back(curr.first);
        if(y+1<arr[x].size()){
            pq.push({arr[x][y+1], {x, y+1}});
        }
    }
    return result;
}

int main() {
    int k; 
    int n;
    cin>>k>>n;
    int p;
    vector<vector<int>>arr;
    for(int i=0; i<k; i++){
        vector<int> temp;
        for(int j=0; j<n; j++){
            cin>>p;
            temp.push_back(p);
        }
        arr.push_back(temp);
    }
        
        vector<int> output=mergeKSortedArrays(arr);
        for(auto x:output)
            cout<<x<<" ";

}

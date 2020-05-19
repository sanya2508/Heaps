// let -1 be the query point.

#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

void query_print(priority_queue<int,vector<int>, greater<int>> pq){
    while(!pq.empty()){
        cout<<pq.top()<<",";
        pq.pop();
    }
    cout<<endl;
}

int main(){
    int no;
    priority_queue<int,vector<int>, greater<int>> pq;
    int cs=0;
    int k=3;

    // end of file-EOF
    while(scanf("%d", &no)!= EOF){
        if(no== -1){
            query_print(pq);
        }
        else if(cs<k){
            pq.push(no);
            cs++;
        }
        else{
            if(no>pq.top()){
                pq.pop();
                pq.push(no);
            }
        }
    }
}


// input 1 2 3 4 -1 5 9 10 -1 12 15 8 6 -1

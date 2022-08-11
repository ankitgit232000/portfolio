#include <bits/stdc++.h>
using namsespace std;

void kthsmallest(vector<int> &v){
    int k=2; n=5
    priority_queue<int> pq;
    for(int i=0; i<n; i++){
        pq.push(v[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    cout<<pq.top();





}


int main(){
    vector<int> vec={5,20,10,7,1};
    int n=vec.size();
    int k=2;
    kthsmallest(vec);

    return 0;
}
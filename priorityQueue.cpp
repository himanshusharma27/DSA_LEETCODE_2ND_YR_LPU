#include<iostream>
#include<queue>

using namespace std ;

int main(){
    priority_queue<int>pq;

    pq.push(10);
    pq.push(50);
    pq.push(23);
    pq.push(34);

    cout<<pq.top();
}

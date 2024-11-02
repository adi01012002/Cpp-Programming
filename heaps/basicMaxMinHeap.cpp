#include <iostream>
#include <queue>
using namespace std;
int main(){
    // MAX HEAPS
// priority_queue<int> pq1;
// pq1.push(10); //10
// pq1.push(1); //10
// pq1.push(4); //10
// pq1.push(5); //10
// pq1.push(6); //10
// cout<<pq1.top(); //10
// pq1.pop(); //10 is removed
// cout<<endl;
// cout<<pq1.top();//6
// cout<<endl;

// MIN HEAPS
priority_queue<int,vector<int>,greater<int>> pq2;
pq2.push(10); //10
pq2.push(9); //9
pq2.push(4);//4
pq2.push(5);//4
pq2.push(5);//4
pq2.push(6);//4
pq2.push(1);//1
cout<<pq2.size();
cout<<endl;
pq2.push(1);//1
cout<<pq2.size(); //8
cout<<pq2.top()<<endl; //1
pq2.pop(); // 1->pop
cout<<pq2.top()<<endl;
cout<<pq2.size();


}
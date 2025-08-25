#include <iostream>
using namespace std;
int pow(int a, int b){
    if (b == 1)return a;
    if (b == 0)return 1;
    return a * pow(a, b - 1);
}
int powLog(int x, int n){
    if (n == 1)
        return x;
    int ans = powLog(x, n / 2);
    if (n % 2 == 2){
        return ans * ans;
    }
    else{
        return ans * ans * x;
    }
}

int main(){
    
    cout << powLog(3, 3);
}

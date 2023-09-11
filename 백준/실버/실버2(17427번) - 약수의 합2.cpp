#include <iostream>

using namespace std;

/*
 * 약수의 합 2 (시간 제한)
 */

int main() {
    int n, i, tmp;
    long sum = 0;

    cin>>n;
    for(i=1; i<=n; i++) {
        tmp = n/i;
        tmp = tmp * i;
        sum += tmp;
    }
    cout<<sum;
}
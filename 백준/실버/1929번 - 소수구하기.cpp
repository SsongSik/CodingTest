#include <iostream>
#include <vector>

using namespace std;

/*
 * M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.
 */

int main() {
    int n, m, i, j;
    cin>>n>>m;
    vector<int> result;
    bool isNum;

    for(i=n; i<=m; i++) {
        if(i==1) continue;
        isNum = true;
        for(j=2; j*j<=i; j++) {
            if(i%j==0) {
                isNum = false;
                break;
            }
        }
        if(isNum) {
            result.push_back(i);
        }
    }

    for(i=0; i<result.size(); i++) {
        cout<<result[i]<<'\n';
    }
}
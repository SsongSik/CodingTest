#include <iostream>
#include <vector>

using namespace std;

/*
 * 주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
 */

int main() {
    int n, i, j, cnt=0;
    bool isNum;
    cin>>n;
    vector<int> numList(n);

    for(i=0; i<n; i++) {
        cin>>numList[i];
    }

    for(i=0; i<n; i++) {
        isNum = true;
        if(numList[i]==1) continue;
        for(j=2; j*j<=numList[i]; j++) {
            if(numList[i]%j == 0) {
                isNum = false;
                break;
            }
        }
        if(isNum) cnt++;
    }

    cout<<cnt;
}

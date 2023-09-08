#include <iostream>
#include <vector>

using namespace std;

/*
 * 두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.
 */

int main() {
    int n, m, i=2;
    vector<int> max;
    vector<int> min;
    int resultMax = 1, resultMin = 1;

    cin>>n>>m;

    while(true) {
        if(n%i==0 && m%i==0) {
            max.push_back(i);
            min.push_back(i);
            n/=i;
            m/=i;
        } else {
            i++;
            if(i>m || i>n) {
                min.push_back(m);
                min.push_back(n);
                break;
            }
        }
    }
    for(i=0; i<max.size(); i++) {
        resultMax*=max[i];
    }
    for(i=0; i<min.size(); i++) {
        resultMin*=min[i];
    }
    cout<<resultMax<<'\n'<<resultMin;
}
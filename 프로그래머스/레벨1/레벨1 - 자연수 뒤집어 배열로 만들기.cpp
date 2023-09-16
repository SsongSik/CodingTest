#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int tmp, num;

    while(true) {
        num = n%10;
        n = n/10;
        answer.push_back(num);
        if(n==0) {
            break;
        }
    }

    return answer;
}
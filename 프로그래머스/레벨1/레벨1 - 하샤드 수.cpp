#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = false;
    int sum = 0;

    string xString = to_string(x);
    for(int i=0; i<xString.size(); i++) {
        sum += int(xString[i]-'0');
    }

    if(x%sum == 0) {
        answer = true;
    }

    return answer;
}
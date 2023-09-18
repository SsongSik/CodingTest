#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int min = 0;
    int isNum = 0;

    if(s[0] == '-') {
        isNum = 1;
    } else if(s[0] == '+') {
        isNum = 2;
    }

    if(isNum == 1 || isNum == 2) {
        min = 1;
    }
    int a=1;

    for(int i=s.size()-1; i>=min; i--) {
        answer = answer + ((s[i]-'0') * a);
        a*=10;
    }
    if(isNum == 1) {
        answer*=-1;
    }

    return answer;
}
#include <iostream>

using namespace std;

int solution(int n)
{
    int answer = 0;
    int tmp;

    while(true) {
        tmp = n%10;
        answer += tmp;
        n = n/10;
        if(n==0) {
            break;
        }
    }

    return answer;
}

int solution2(int n)
{
    int answer = 0;

    string s = to_string(n);

    for(int i=0; i<s.size(); i++) {
        answer += (s[i] - '0');
    }

    return answer;
}
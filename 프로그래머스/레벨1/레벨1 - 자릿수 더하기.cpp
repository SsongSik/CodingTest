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
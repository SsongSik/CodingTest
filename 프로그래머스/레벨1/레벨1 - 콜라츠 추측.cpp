#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    int count = 0;
    if(num==1) {
        return 0;
    }

    while(true) {
        count++;
        if(count==500) {
            answer=-1;
            break;
        }
        if(num%2==0) {
            num/=2;
        } else {
            num*=3;
            num+=1;
        }
        if(num==1) {
            answer=count;
            break;
        }
    }

    return answer;
}
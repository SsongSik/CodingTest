#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;

    vector<int> setting(10, 0);
    for(int i=0; i<numbers.size(); i++) {
        setting[numbers[i]]++;
    }

    for(int i=0; i<10; i++) {
        if(setting[i] == 0) {
            answer += i;
        }
    }

    return answer;
}
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    if(arr.size() == 1) {
        answer.push_back(-1);
    } else {
        arr.erase(min_element(arr.begin(), arr.end()));
        answer = arr;
    }

    return answer;
}

vector<int> solution2(vector<int> arr) {
    vector<int> answer;
    int min = arr[0];
    int minPosition = 0;

    if(arr.size() == 1) {
        answer.push_back(-1);
    } else {
        for(int i=1; i<arr.size(); i++) {
            if(min > arr[i]) {
                min = arr[i];
                minPosition = i;
            }
        }
        arr.erase(arr.begin() + minPosition);
        answer = arr;
    }

    return answer;
}
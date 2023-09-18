#include <string>
#include <iostream>
#include <vector>
using namespace std;

bool solution(string s)
{
    bool answer = false;
    vector<int> a(2, 0);

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'P' || s[i] == 'p') {
            a[0]++;
        } else if(s[i] == 'Y' || s[i] == 'y') {
            a[1]++;
        }
    }
    if(a[0] == a[1]) {
        answer = true;
    }

    return answer;
}
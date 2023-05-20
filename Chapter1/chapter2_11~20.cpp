#include <iostream>
#include <stdio.h>

int main() {
    /*
     * 11번 문제 : 숫자의 총 개수(small)
     * ex) 15 -> 21
        int n, i;
        int cnt = 0;
        int temp;
        std::cin>>n;
        for(i = 1; i<=n; i++) {
            temp = i;
            while(temp > 0) {
                temp = temp/10;
                cnt++;
            }
        }
        std::cout<<cnt;
     */
    /*
     * 12번 문제 : 숫자의 총 개수(large) - 시간제한
        int n, sum = 0, c = 1, d = 9, res = 0;
        std::cin>>n;
        while(sum+d<n) {
            res = res+(c*d); // 9, 189, -> 둘 째 짜리 수의 합
            sum = sum + d; // 9, 99 -> 이를 제외한 나머지(셋 째 짜리) * 3
            d = d*10; // 90, 900
            c++; // 2, 3
        }
        res=res+((n-sum)*c);
        std::cout<<res;
     */
}

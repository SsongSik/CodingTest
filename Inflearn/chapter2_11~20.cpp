#include <iostream>
#include <stdio.h>

int reverse(int x);
bool isPrime(int x);

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
    /*
     * 13번 문제 : 가장 많이 사용된 자릿수
     * ex) 1445524 -> 4
        int ch[10] = {0} ;
        int i, digit, max=-2147000000, res;
        char a[101];

        std::cin>>a;
        for(i=0; a[i]!='\0'; i++) {
            digit = a[i]-48;
            ch[digit]++;
        }

        for(i=0; i<10; i++) {
            if(ch[i]>max) {
                res = i;
                max = ch[i];
            } else if(ch[i] == max) {
                if(i > res) {
                    res = i;
                }
            }
        }
        std::cout<<res;
     */
    /*
     * 14번 문제 : 뒤집은 소수
     * ex) 5
     * 32 55 62 3700 250
     * -> 23 73
        int n, num, i, tmp;
        std::cin>>n;
        for(i = 1; i<=n; i++) {
            std::cin>>num;
            tmp = reverse(num);
            if(isPrime(tmp)) {
                std::cout<<tmp<<' ';
            }
        }

        int reverse(int x) {
            int res=0;
            int tmp;
            while(x>0) {
                tmp = x%10; //2
                res=res*10+tmp;
                x=x/10;
            }
            return res;
        }

        bool isPrime(int x) {
            int i;
            if(x==1) {
                return false;
            }
            bool flag = true;
            for(i = 2; i<x; i++) {
                if(x%i==0) {
                    flag = false;
                    break;
                }
            }
            return flag;
        }
     */
}

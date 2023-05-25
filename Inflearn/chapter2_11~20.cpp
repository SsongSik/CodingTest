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
    /*
     * 15번 문제 : 소수의 개수(제한 시간 1초)
     * 20 -> 8
        int n, i, j;
        int cnt = 0;
        std::cin>>n;

        for(i = 2; i <= n; i++) {
            bool isPrime = true;

            for(j = 2; j*j<=i; j++) {
                if(i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime) {
                cnt++;
            }
        }
        std::cout<<cnt;
     */
    /*
     * 16번 문제 : Anagram 문제(구글 인터뷰 문제)
     * ex)
     * AbaAeCe
     * baeeACA -> YES
        char a[101];
        char b[101];
        int resA[32] = {0};
        int resa[32] = {0};
        int resB[32] = {0};
        int resb[32] = {0};
        int i;
        bool res = true;

        std::cin>>a;
        std::cin>>b;

        for(i=0; a[i]!='\0'; i++) {
            if(a[i] >= 65 && a[i] <= 90) {
                resA[a[i]-65]++;
            }
            if(a[i] >= 97 && a[i] <= 122) {
                resa[a[i]-97]++;
            }
        }

        for(i=0; b[i]!='\0'; i++) {
            if(b[i] >= 65 && b[i] <= 90) {
                resB[b[i]-65]++;
            }
            if(b[i] >= 97 && b[i] <= 122) {
                resb[b[i]-97]++;
            }
        }

        for(i=0; i<=31; i++) {
            if(resA[i] != resB[i]) {
                res = false;
            }
            if(resa[i] != resb[i]) {
                res = false;
            }
        }

        if(res) {
            std::cout<<"YES";
        } else {
            std::cout<<"NO";
        }

        -----------------------------------
        더 효율적인 방법(입력 하나로)
        char a[101];
        int resA[52] = {0};
        int resB[52] = {0};
        int i;
        bool res = true;

        std::cin>>a;

        for(i=0; a[i]!='\0'; i++) {
            if(a[i] >= 65 && a[i] <= 90) {
                resA[a[i]-65]++;
            }
            if(a[i] >= 97 && a[i] <= 122) {
                resA[a[i]-71]++;
            }
        }

        std::cin>>a;

        for(i=0; a[i]!='\0'; i++) {
            if(a[i] >= 65 && a[i] <= 90) {
                resB[a[i]-65]++;
            }
            if(a[i] >= 97 && a[i] <= 122) {
                resB[a[i]-71]++;
            }
        }

        for(i=0; i<=51; i++) {
            if(resA[i]!=resB[i]) {
                res = false;
            }
        }

        if(res) {
            std::cout<<"YES";
        } else {
            std::cout<<"NO";
        }
     */
    /*
     * 17번 문제 : 선생님 퀴즈
     * ex)
     * 3
     * 10 55
     * 20 350
     * 100 5050 -> YES NO YES
        int n, i;
        int a, result;

        int j, sum;

        std::cin>>n;
        for(i = 0; i < n; i++) {
            sum = 0;
            std::cin>>a>>result;
            for(j = 1; j <= a; j++) {
                sum += j;
            }
            if(sum == result) {
                std::cout<<"YES\n";
            } else {
                std::cout<<"NO\n";
            }
        }
     */
    /*
     * 18번 문제 : 층간소음
     * ex) 10 90
     * 23 17 120 34 112 12 123 235 25 113 -> 3
        int n, m;
        std::cin>>n>>m;
        int i, cnt = 0;
        int res;
        int tmp = -2147000000;

        for(i = 0; i < n; i++) {
            std::cin>>res;
            if(res > m) {
                cnt++;
                if(cnt > tmp) {
                    tmp = cnt;
                }
            } else {
                cnt = 0;
            }
        }
        if(cnt==0) {
            tmp = -1;
        }
        std::cout<<tmp;
     */
    /*
     * 19번 문제 : 분노유발자
     * ex) 10
     * 56 46 55 76 65 53 52 53 55 50 -> 3
        int n, i, j;
        std::cin>>n;

        int cnt = 0;
        int a[100] = {0};
        for(i = 0; i < n; i++) {
            std::cin>>a[i];
        }

        for(i = 0; i < n-1; i++) {
            for(j = i+1; j < n; j++) {
                if(a[i] <= a[j]) {
                    break;
                } else {
                    if(j==n-1) {
                        cnt++;
                    }
                }
            }
        }
        std::cout<<cnt;

        다른 답안 :
        int n, i, cnt=0, h[101], max;
        std::cin>>n;
        for(i=1; i<=n; i++) {
            std::cin>>h[i];
        }
        max = h[n];
        for(i=n-1; i>=1; i--) {
            if(h[i] > max) {
                max = h[i];
                cnt++;
            }
        }
        std::cout<<cnt;
     */
    /*
     * 20번 문제 : 가위 바위 보
     * ex) 5
     * 2 3 3 1 3
     * 1 1 2 2 3
     * A B A B D
        int n, i;
        int a[100] = {0}, b[100] = {0};
        std::cin>>n;

        for(i = 0; i < n; i++) {
            std::cin>>a[i];
        }

        for(i = 0; i < n; i++) {
            std::cin>>b[i];
        }

        for(i = 0; i < n; i++) {
            if(a[i] == 1) {
                if(b[i] == 1) {
                    std::cout<<"D\n";
                }else if(b[i] == 2) {
                    std::cout<<"B\n";
                } else {
                    std::cout<<"A\n";
                }
            } else if(a[i] == 2){
                if(b[i] == 1) {
                    std::cout<<"A\n";
                }else if(b[i] == 2) {
                    std::cout<<"D\n";
                } else {
                    std::cout<<"B\n";
                }
            } else {
                if(b[i] == 1) {
                    std::cout<<"B\n";
                }else if(b[i] == 2) {
                    std::cout<<"A\n";
                } else {
                    std::cout<<"D\n";
                }
            }
        }

        다른 방법 : 비기는 경우, A가 이기는 경우만 생각하고 나머지는 B
        int n, i;
        int a[100] = {0}, b[100] = {0};
        std::cin>>n;

        for(i = 0; i < n; i++) {
            std::cin>>a[i];
        }

        for(i = 0; i < n; i++) {
            std::cin>>b[i];
        }

        for(i=0; i<n; i++) {
            if(a[i] == b[i]) std::cout<<"D\n";
            else if(a[i]==1 && b[i]==3) std::cout<<"A\n";
            else if(a[i]==2 && b[i]==1) std::cout<<"A\n";
            else if(a[i]==3 && b[i]==2) std::cout<<"A\n";
            else std::cout<<"B\n";
        }
     */
}

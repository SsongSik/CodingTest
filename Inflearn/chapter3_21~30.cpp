#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <string>

int main() {
    /*
     * 21번 문제 : 카드게임
     * ex)
     * 4 5 6 7 0 1 2 3 9 8
     * 1 2 3 4 5 6 7 8 9 0
        int a[10] = {0};
        int b[10] = {0};

        int sumA = 0;
        int sumB = 0, i;
        int lastWinner = 0; //0이면 a, 1이면 b

        for(i=0; i<=9; i++) {
            std::cin>>a[i];
        }

        for(i=0; i<=9; i++) {
            std::cin>>b[i];
        }

        for(i=0; i<=9; i++) {
            if(a[i] == b[i]) {
                sumA += 1;
                sumB += 1;
            } else {
                if(a[i] > b[i]) {
                    sumA += 3;
                    lastWinner = 1;
                } else {
                    sumB += 3;
                    lastWinner = 2;
                }
            }
        }

        std::cout<<sumA<<" "<<sumB<<"\n";
        if(sumA == sumB) {
            if(lastWinner == 0) {
                std::cout<<"D";
            } else if(lastWinner == 1){
                std::cout<<"A";
            } else {
                std::cout<<"B";
            }
        } else {
            if(sumA > sumB) {
                std::cout<<"A";
            } else {
                std::cout<<"B";
            }
        }
     */
    /*
     * 22번 문제 : 온도의 최대값(제한시간 1초)
     * ex) 10 2
     * 3 -2 -4 -9 0 3 7 13 8 -3
        int n, m, i, j;
        std::cin>>n>>m;
        int a[100000] = {0};

        int sum, max = -2147000000;

        for(i=0; i<n; i++) {
            std::cin>>a[i];
        }

        for(i=0; i<=n-m; i++) {
            sum = 0;
            for(j=i; j<i+m; j++) {
                sum += a[j];
                if(sum > max) {
                    max = sum;
                }
            }
        }
        std::cout<<max;
        -> 시간 초과 발생, 다른 답안 필요
        int n, k, i, sum=0, max;
        std::cin>>n>>k;
        std::vector<int> a(n);

        for(i=0; i<n; i++) {
            std::cin>>a[i];
        }
        for(i=0; i<k; i++) {
            sum+=a[i];
        }
        max=sum; //0, 1의 합
        for(i=k; i<n; i++) {
            sum=sum+(a[i] - a[i-k]);
            if(sum>max) {
                max = sum;
            }
        }
        std::cout<<max;
     */
    /*
     * 23번 문제 : 연속 부분 증가수열
     * ex) 9
     * 5 7 3 3 12 12 13 10 11
     * -> 5
     * 10
     * 1 2 3 0 0 9 10 11 1 2
     *  int n, i, cnt=1;
        std::cin>>n;
        int max = 0;

        std::vector<int> a(n);

        for(i=0; i<n; i++) {
            std::cin>>a[i];
            if(i>=1) {
                if(a[i] >= a[i-1]) {
                    cnt++;
                    if(max<cnt) {
                        max = cnt;
                    }
                }
                else {
                    cnt = 1;
                }
            }
        }
        std::cout<<max;
        다른 답안)
        int n, i, pre, now, cnt=1, max=1;
        std::cin>>n;
        std::cin>>pre;
        for(i=1; i<n; i++) {
            std::cin>>now;
            if(now>=pre) {
                cnt++;
                if(cnt>max) {
                    max = cnt;
                }
            } else {
                cnt=1;
            }
            pre=now;
        }
        std::cout<<max;
     */
    /*
     * 24번 문제 : Jolly Jumpers
     * ex) 5
     * 1 4 2 3 7
     * -> YES
     *  int n, i;
        bool res = false;
        std::cin>>n;

        std::vector<int> a(n);
        int pre=0, now=0;
        std::cin>>pre;

        for(i=1; i<n; i++) {
            std::cin>>now;
            if(now-pre < n) {
                a[std::abs(now-pre)]++;
            }
            pre = now;
        }

        for(i=1; i<n; i++) {
            if(a[i]!=0){
                res = true;
            } else {
                res = false;
                break;
            }
        }

        if(res) {
            std::cout<<"YES";
        } else {
            std::cout<<"NO";
        }
        다른풀이) ->
        어차피 값이 n이상이거나, 이미 배열에 값이 존재하면
        그건 Jolly Jump가 아님

        int n, i, now, pre, pos;
        std::cin>>n;
        std::vector<int> ch(n);
        std::cin>>pre;

        for(i=1; i<n; i++) {
            std::cin>>now;
            pos=abs(pre-now);
            if(pos>0 && pos<n && ch[pos]==0) {
                ch[pos] = 1;
            } else {
                std::cout<<"NO";
                return 0;
            }
            pre=now;
        }
        std::cout<<"YES";
     */
}
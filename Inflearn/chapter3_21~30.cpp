#include <iostream>
#include <vector>

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
}
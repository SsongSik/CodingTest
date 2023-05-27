#include <iostream>

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
}
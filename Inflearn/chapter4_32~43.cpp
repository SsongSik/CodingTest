#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <string>

int main() {
    /*
     * 32번 : 선택정렬
     * ex) 6
     * 13 5 11 7 23 15
     * -> 5 7 11 13 15 23
     *  int a[100], n, idx, i, j, tmp;

        std::cin>>n;
        for(i=0; i<n; i++) {
            std::cin>>a[i];
        }
        for(i=0; i<n-1; i++) {
            idx=i;
            for(j=i+1; j<n; j++) {
                if(a[idx]>a[j]) {
                    idx=j;
                }
            }
            tmp=a[i];
            a[i]=a[idx];
            a[idx]=tmp;
        }
        for(i=0; i<n; i++) {
            std::cout<<a[i]<<' ';
        }
     */
    /*
     * 33번 : 3등의 성적은?(정렬 응용)
     * ex) 7
     * 80 96 75 82 96 92 100
     * -> 92
     *  int n, cnt=0, res;
        std::cin>>n;
        std::vector<int> a(n);

        int i, j, idx, tmp;
        for(i=0; i<n; i++) {
            std::cin>>a[i];
        }

        for(i=0; i<n-1; i++) {
            idx=i;
            for(j=i+1; j<n; j++) {
                if(a[idx]<a[j]) {
                    idx=j;
                }
            }
            tmp=a[idx];
            a[idx]=a[i];
            a[i]=tmp;
        }

        for(i=1; i<n; i++) {
            if(a[i-1]!=a[i]) {
                cnt++;
            }
            if(cnt==2) {
                res=a[i];
                break;
            }
        }
        std::cout<<res;
     */
    /*
     * 34번 : 버블정렬
     * ex) 6
     * 13 23 11 7 5 15
     * -> 5 7 11 13 15 23
     *  int n, i, j, tmp;
        std::vector<int> a(n);
        std::cin>>n;

        for(i=0; i<n; i++) {
            std::cin>>a[i];
        }

        for(i=0; i<n-1; i++) {
            for(j=0; j<n-i-1; j++) {
                if(a[j]>a[j+1]) {
                    tmp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;
                }
            }
        }

        for(i=0; i<n; i++) {
            std::cout<<a[i]<<' ';
        }
     */
    /*
     * 35번 Special Sort(구글인터뷰) 버블정렬 응용
     * ex) 8
     * 1 2 3 -3 -2 5 6 -6
     * -> -3 -2 -6 1 2 3 5 6
     *  int n, i, j, tmp;
        std::cin>>n;
        std::vector<int> a(n);

        for(i=0; i<n; i++) {
            std::cin>>a[i];
        }

        for(i=0; i<n-1; i++) {
            for(j=0; j<n-i-1; j++) {
                if(a[j]>0 && a[j+1]<0) {
                    tmp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;
                }
            }
        }

        for(i=0; i<n; i++) {
            std::cout<<a[i]<<' ';
        }
     */
    /*
     * 36번 삽입정렬
     * ex) 6
     * 11 7 5 6 10 9
     * -> 5 6 7 9 10 11
     *  int n, i, j, tmp;
        std::cin>>n;
        std::vector<int> a(n);

        for(i=0; i<n; i++) {
            std::cin>>a[i];
        }

        for(i=1; i<n; i++) {
            tmp=a[i]; //7
            for(j=i-1; j>=0; j--) {
                if(a[j]>tmp) { //11>7
                    a[j+1]=a[j]; // 11 11
                } else {
                  break;
                }
            }
            a[j+1]=tmp;
        }

        for(i=0; i<n; i++) {
            std::cout<<a[i]<<' ';
        }
     */
    /*
     * 37번 Least Recently Used(카카오 캐시 문제 변형) - 삽입정렬 코드 스타일
     * ex) 5, 9
     * 1 2 3 2 6 2 3 5 7
     * -> 7 5 3 2 6
     *  int size, n, i, j, num, pos;
        std::cin>>size>>n;
        std::vector<int> a(size);

        for(i=0; i<n; i++) {
            pos = -1;
            std::cin>>num;
            for(j=0; j<size; j++) {
                if(num==a[j]) {
                    pos = j;
                }
            }
            if(pos==-1) {
                //miss
                for(j=size-1; j>=1; j--) {
                    a[j]=a[j-1];
                }
            } else {
                //hit
                for(j=pos; j>=1; j--) {
                    a[j]=a[j-1];
                }
            }
            a[0]=num;
        }

        for(i=0; i<size; i++) {
            std::cout<<a[i]<<' ';
        }
     */
    /*
     * 38번 Inversion Sequence
     * ex) 8
     * 5 3 4 0 2 1 1 0
     * -> 4 8 6 2 5 1 3 7
     *  int n, i, j, pos;
        std::cin>>n;
        std::vector<int> is(n+1), os(n+1);
        for(i=1; i<=n; i++){
            std::cin>>is[i];
        }
        for(i=n; i>=1; i--){
            pos=i;
            for(j=1; j<=is[i]; j++){
                os[pos]=os[pos+1];
                pos++;
            }
            os[pos]=i;
        }
        for(i=1; i<=n; i++){
            std::cout<<os[i]<<' ';
        }
        return 0;
     */
}
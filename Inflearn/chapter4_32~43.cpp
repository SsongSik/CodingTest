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
}
#include <iostream>
#include <stdio.h>

int digit_sum(int i);

int main() {
    /*
     * 인프런 C++ CodingTest 강의
     * 1번 문제 : 1부터 N까지 M의 배수의 합
     * ex) 15 3 -> 45
        int n, m, i, sum = 0;
        //15와 3을 입력하면 차례대로 n과 m에 들어감
        std::cin>>n>>m;

        for(i=1; i<=n ; i++){
            if(i%m==0){
                sum+=i;
            }
        }
        std::cout<<sum;
     */
    /*
     * 2번 문제 : 자연수의 합
     * ex) 3 7 -> 3+4+5+6+7=25
        int n, m, i, sum = 0;
        std::cin>>n>>m;
        //3 7
        for(i=n; i<m; i++) {
            std::cout<<i<<" + ";
            sum+=i;
        }
        std::cout<<i<<" = ";
        std::cout<<sum+i;
     */
    /*
     * 3번 문제 : 진약수의 합
     * ex) 10 -> 1+2+4+5+10 = 22
        int n, i, sum = 1;
        std::cin>>n;
        std::cout<<"1";
        for(i=2; i<n; i++) {
            if(n%i==0) {
                std::cout<<"+"<<i;
                sum+=i;
            }
        }
        std::cout<<"="<<sum;
     */
    /*
     * 4번 문제 : 나이차이
     * ex)
     * 10
     * 13 15 34 23 45 65 33 11 26 42 ->
     * 54
        freopen("input.txt", "rt", stdin); //파일 입출력
        int n, i, a, max=-2147000000, min=2147000000;
        std::cin>>n;
        for(i=1; i<=n; i++) {
            std::cin>>a;
            if(a>max) max = a;
            if(a<min) min = a;
        }
        std::cout<<max-min;
     */
    /*
     * 5번 문제 : 나이계산
     * ex) 780316-2376152 -> 42 W
     * 부연설명 : 2019년 기준으로
     * 1은 1900년대생 남자
     * 2는 1900년대생 여자
     * 3은 2000년대생 남자
     * 4는 2000년대생 여자
     * 나이와 성별 출력
     *
     * ascii code
     * 'A' ~ 'Z' -> 65~90
     * 'a' ~ 'z' -> 97~122
     * '0' ~ '9' -> 48~57
        char a[20];
        int year, age;
        std::cin>>a;
        scanf("%s", &a);
        if(a[7]=='1' || a[7]=='2') year=1900+((a[0]-48)*10+(a[1]-48));
        else year=2000+((a[0]-48)*10+(a[1]-48));
        age=2019-year+1;
        std::cout<<age;
        if(a[7]=='1' || a[7]=='3') std::cout<<" M";
        else std::cout<<" W";
     */
    /*
     * 6번 문제 : 숫자만 추출
     * ex) g0en2Ts8ESoft -> 28 6
        char a[50];
        int res=0, cnt=0, i;
        std::cin>>a;
        for(i=0; a[i]!='\0'; i++) {
            if(a[i] >= 48 && a[i] <= 57) {
                res = res*10+(a[i]-48);
            }
        }
        std::cout<<res<<"\n";
        for(i=1; i<=res; i++) {
            if(res%i == 0) {
                cnt++;
            }
        }
        std::cout<<cnt;
     */
    /*
     * 7번 문제 : 영어단어 복구
     * ex) bE   au T I fu   L -> beautiful
        char a[100];
        int i, p = 0;
        char res[100];
        gets(a);
        for(i = 0; a[i]!='\0'; i++) {
            if(a[i] != ' ') {
                if(a[i] >= 'A' && a[i] <= 'Z') {
                    res[p++]=a[i] + 32;
                } else {
                    res[p++]=a[i];
                }
            }
        }
        res[p]='\0';
        std::cout<<res;
     */
    /*
     * 8번 문제 : 올바른 괄호
     * ex) (()(())))(() -> NO
     * (()) )( 이것도 cnt가 0이 되더라도 올바른 괄호가 아님
        char a[30];
        int i, cnt = 0;
        std::cin>>a;

        for(i = 0; a[i]!='\0'; i++) {
            if(a[i]=='(') {
                cnt++;
            } else if(a[i] == ')') {
                cnt--;
            }
            if(cnt<0){
                break;
            }
        }
        if(cnt==0) {
            std::cout<<"YES";
        } else {
            std::cout<<"NO";
        }
     */
    /*
     * 9번 문제 : 모두의 약수
     * ex) 8 -> 1 2 2 3 2 4 2 4
     *
        int a;
        std::cin>>a;
        int i, j, cnt;

        for(i = 1; i<=a ; i++) {
            cnt = 0;
            for(j = 1; j <= i; j++) {
                if(i%j == 0) {
                    cnt++;
                }
            }
            std::cout<<cnt<<' ';
        }
        //n제곱의 시간복잡도를 소요하게 됨 -> 다른 방법이 필요
        int cnt[50001];
        int n, i, j;
        std::cin>>n;

        for(i = 1; i<=n; i++) {
            for(j = i; j<=n; j=j+i) {
                cnt[j]++;
            }
        }

        for(i = 1; i<=n; i++) {
            std::cout<<cnt[i]<<' ';
        }
     */
    /*
     * 10번 문제 : 자릿수의 합
     * ex)
     * 5
     * 125 15232 79 1325 97
     * -> 97
        int n;
        std::cin>>n;
        int b;
        int i, res, max=-2147000000;
        int sum;

        for(i = 0; i<n; i++) {
            std::cin>>b;
            sum = digit_sum(b);
            if(sum > max) {
                max = sum;
                res = b;
            }
            else if(sum==max) {
                if(b>res) res=b;
            }
        }
        std::cout<<res;
     */
}

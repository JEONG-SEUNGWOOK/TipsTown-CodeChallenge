
using namespace std;

int solution(int n, int a, int b)
{
    int answer=1;
    a--,b--;
    while(1){
        if(a>b && (a%2 && b+1==a))break;
        if(b>a && (b%2 && a+1==b))break;
        a/=2, b/=2, answer++;
        if((a==0 && b==1) || (a==1 && b==0)) break;
    }
    return answer;
}


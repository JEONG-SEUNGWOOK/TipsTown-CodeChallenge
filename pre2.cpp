#include<string>
#include <stack>
using namespace std;

int solution(string s)
{
    int answer = 0;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        char c = s.at(i);
        if(!st.empty()){
            if(st.top() == c) st.pop();
            else st.push(c);
        }
        else st.push(c);
    }
    if(st.empty()) answer=1;
    return answer;
}

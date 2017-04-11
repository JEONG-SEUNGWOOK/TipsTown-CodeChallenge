

#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
string t = "apple";
vector<string> strs = { "app","ap","p","l","e","ple","pp" };
int mem[20002];
map<string, int> m;


int Go(int idx) {
    
    if (idx >= t.size()) return 0;
    if (mem[idx] != 0) return mem[idx];
    
    int temp1 = INT32_MAX;
    for (int i = 1;( i < 6) && (idx + i <= t.size()); i++)
    {
        string temp = t.substr(idx, i);
        if (m.count(temp) == 1) {
            
            int temp2 = Go(idx + i );
            //cout<<"i:"<<i<<" idx:"<<idx<<" "<<temp<<" temp2:"<<temp2<<endl;
            if (temp2 != -1)
            {
                temp1 = min(temp1, temp2 + 1);
            }
        }
        
    }
    if (temp1 == INT32_MAX) mem[idx] = -1;
    else mem[idx] = temp1;
    return mem[idx];
}

int main() {
    
    
    for (auto& iter : strs)
        m[iter] = 1;
    string s="abcd";
    
    cout<< Go(0);
    
}

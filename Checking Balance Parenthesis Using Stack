#include <bits/stdc++.h>
using namespace std;
unordered_map<char , int > symbols = {{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};   //Unordered Map for Parenthesis
string isBalanced(string s){
    stack<char > st;  //Using a Stack
    for(char bracket : s){
        if(symbols[bracket]<0) st.push(bracket);  //Treating all -ve values as open parenthesis
        else{
            if(st.empty()) return "NO";
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[bracket]!=0) return "NO";   // If sum = 0 , Parenthesis are of same type
        }
    }
    if(st.empty()) return "YES";
    else return "NO";
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    string s;
	    cin>>s;
	    cout<<isBalanced(s)<<endl;
	}
return 0;
}

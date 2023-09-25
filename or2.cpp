#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(string s)
{
    int length = s.size();

    stack<char> st;

    int i, mid = length / 2;

    for (i = 0; i < mid; i++) {
        st.push(s[i]);
    }

    if (length % 2 != 0) {
        i++;
    }

    char ele;

    while (s[i] != '\0')
    {
        ele = st.top();
        st.pop();
        if (ele != s[i]) return false;
        i++;
    
    }

return true;
}


int main()
{
    int n;
    cin>>n;
    if(n>0){
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        string s=arr[i];
        if (isPalindrome(s)) {
        cout << "Yes"<<endl;
    }
    else {
        cout << "No"<<endl;
    }
    }
    }
    else{
        cout<<"Invalid Input"<<endl;
    }
    return 0;
}
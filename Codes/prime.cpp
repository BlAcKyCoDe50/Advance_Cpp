#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >>m;
    queue<int> q;
    for (int i = 0; i<n; i++){
        int x;
        cin >> x;
        q.push(x);
        
    }
    
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        if(x == 1){
            int y = q.front();
            q.pop();
            q.push(y);
        }
        else{
            q.pop();
        }
    }
    while(!q.empty()){
        cout << q.front()<<" ";
        q.pop();
    }
    cout<<endl;
     return 0;
}
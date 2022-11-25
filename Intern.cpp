// Explaination in form of comments
// pre-processing files
#include <bits/stdc++.h>
using namespace std;
int main() {
    // taking input for vector/array for counting frequency
    int n; cin>>n; // size of vector
    vector<int> ans(n); // vector of size n
    for(int i=0;i<n;i++) cin>>ans[i];
    
    // Maintaining a map for count of each element to store from standard library
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[ans[i]]++; // increament for freq of each element
    }
    for(auto i:mp){
        cout << i.first << "->" << i.second << endl;
    }

    return 0;
}
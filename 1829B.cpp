#include <iostream>
#include <vector>
using namespace std;

int longestBlankSpace(vector<int>& a) {
    int maxLength = 0;
    int currentLength = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 0) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 0;
        }
    }
    maxLength = max(maxLength, currentLength);
    return maxLength;
}

int main() {
    int n, x;
    cin>>x;
    for(int i=0; i<x; i++){
    
    cin >> n;
    vector<int> a(n);
  
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int length = longestBlankSpace(a);
    cout << length << endl;
    }
    return 0;
}

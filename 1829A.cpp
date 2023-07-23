#include <iostream>
using namespace std;

int countDifference(string s) {
    string codeforces = "codeforces";
    int diff = 0;
    for (int i = 0; i < 10; i++) {
        if (s[i] != codeforces[i]) {
            diff++;
        }
    }
    return diff;
}

int main() {
    int n;
    string s;
    cin >> n;
    for(int i=0; i<n; i++){

    cin>>s;
    

    int diff = countDifference(s);
    cout << diff << endl;
    }
    return 0;
}

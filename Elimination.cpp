#include <bits/stdc++.h>
using namespace std;

bool stringCheck(stack<string> &stk) {
    if (!stk.empty()) {
        string line = stk.top();

        int i = 0;
        while (i < line.size()) {
            if (i + 1 < line.size() && line[i] == '0' && line[i + 1] == '1') {
                line.erase(i, 2);
                if (i > 0) i--; 
            } else {
                i++;
            }
        }
        return line.empty();
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    while (n > 0) {
        stack<string> stk;
        string val;
        cin >> val;
        stk.push(val);
        bool result = stringCheck(stk);
        cout << (result ? "YES" : "NO") << endl;
        n--;
    }
    return 0;
}

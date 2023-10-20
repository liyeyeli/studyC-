#include <iostream>
#include <map> 

using namespace std;

int main() {
    int n;
    char op;
    string id, pwd;
    map<string, string> mmp;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> op >> id >> pwd;
        if (op == 'L') { // Login
            if (!mmp.count(id))
                cout << "ERROR: Not Exist" << endl;
            else if (mmp[id] != pwd)
                cout << "ERROR: Wrong PW" << endl;
            else
                cout << "Login: OK" << endl;
        }
        else if (op == 'N') { // New 
            if (mmp.count(id))
                cout << "ERROR: Exist" << endl;
            else {
                mmp[id] = pwd;
                cout << "New: OK" << endl;
            }
        }
    }

    return 0;
}
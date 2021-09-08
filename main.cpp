/*
* Created by rrenamed
* Feel free to contribute explanations
* https://codeforces.com/contest/1560/submission/127462230
*/

#include <iostream>
using namespace std;

int main(){
    int tc = 0;
    cin >> tc;
    while(tc--){
        int length = 0;
        cin >> length;
        string str = "";
        cin >> str;
        bool found = false;
        for(int i=1; i<length; i++){
            if(str[i] != str[i-1]){
                cout << i << ' ' << i+1;
                found = true;
                break;
            }
        }
        if(!found)
            cout << "-1 -1";
        cout << '\n';
    }
    return 0;
}

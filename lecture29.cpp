// #include<iostream>
// using namespace std;

// int main(){

//     char str[10];

//     cout<<"enter char array which length u want: ";
//     cin.getline(str, 100);

//     for(char ch : str){
//         cout<< ch<< " ";
//     }
//     cout<<endl;
//     return 0;
// }






/// string reversal



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;   // number of test cases

    while (t--) {
        string s;
        cin >> s;

        int st = 0, end = s.length() - 1;

        while (st < end) {
            char temp = s[st];
            s[st] = s[end];
            s[end] = temp;
            st++;
            end--;
        }

        cout << s << endl;
    }

    return 0;
}
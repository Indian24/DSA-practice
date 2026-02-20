#include<iostream>
using namespace std;

int main(){

    char str[10];

    cout<<"enter char array which length u want: ";
    cin.getline(str, 100);

    for(char ch : str){
        cout<< ch<< " ";
    }
    cout<<endl;
    return 0;
}
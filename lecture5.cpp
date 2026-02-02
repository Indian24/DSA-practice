// function 


// n factorial question 

// #include<iostream>
// using namespace std;

// int factorialN(int n){
//     int fact =1;

//     for(int i=1; i<=n; i++){
//         fact = fact *i; // fact *=i;
//     }
//     return fact;
// }
// int main(){

//     cout <<factorialN(3)<<endl;
//     cout <<factorialN(2)<<endl;
//     return 0;
// }









// // suum of digits of number


// #include<iostream>
// using namespace std;

// int sumOfDigits(int num){
//     int digSum =0;

//     while(num>0){
//         int lastDig = num%10;
//         num /= 10;

//         digSum += lastDig;
//     }
//     return digSum;
// }
// int main(){
//     cout << "sum = "<< sumOfDigits(2356)<<endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// // Function to calculate the sum of digits of a number
// int sumOfDigits(int num) {
//     int digSum = 0;   // Variable to store sum of digits

//     // Loop runs until number becomes 0
//     while (num > 0) {
//         int lastDig = num % 10;  // Extract last digit of the number
//         num /= 10;               // Remove last digit from the number

//         digSum = digSum+lastDig;       // Add last digit to the sum
//     }// digSum += lastDig

//     return digSum;  // Return the final sum of digits
// }

// int main() {
//     // Calling the function and printing the result
//     cout << "sum = " << sumOfDigits(2356) << endl;

//     return 0;  // Program ends successfully
// }





// ncr question



#include<iostream>
using namespace std;

int factorial(int n){
    int fact =1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r * fact_nmr);
}
int main(){
    int n =8 , r=2;
    cout<< nCr(n,r)<< endl;

    return 0;
}
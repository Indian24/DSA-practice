// #include <bits/stdc++.h>
// using namespace std;

// // Helper function (same as LeetCode)
// bool isAlphaNum(char ch){
//     return isalnum(ch);
// }

// // Main palindrome logic
// bool isPalindrome(string s){
//     int st = 0, end = s.length() - 1;

//     while(st < end){

//         // skip left symbols
//         if(!isAlphaNum(s[st])){
//             st++;
//             continue;
//         }

//         // skip right symbols
//         if(!isAlphaNum(s[end])){
//             end--;
//             continue;
//         }

//         // compare lowercase
//         if(tolower(s[st]) != tolower(s[end])){
//             return false;
//         }

//         st++;
//         end--;
//     }

//     return true;
// }

// int main(){
//     int t;
//     cin >> t;
//     cin.ignore();   // VERY IMPORTANT

//     while(t--){
//         string s;
//         getline(cin, s);   // full line input

//         if(isPalindrome(s))
//             cout << "true\n";
//         else
//             cout << "false\n";
//     }

//     return 0;
// }
















/////////////////////////////////// 
// remove all occurance///in string


// #include <bits/stdc++.h>
// using namespace std;

// string removeOccurrences(string s, string part) {
//     while (true) {
//         int pos = s.find(part);   // find substring
        
//         if (pos == string::npos)  // not found → stop
//             break;
        
//         s.erase(pos, part.length()); // remove it
//     }
//     return s;
// }

// int main() {
//     int T;
//     cin >> T;
//     cin.ignore(); // remove newline after T

//     while (T--) {
//         string s, part;
        
//         getline(cin, s);      // main string
//         getline(cin, part);   // substring to remove

//         cout << removeOccurrences(s, part) << endl;
//     }

//     return 0;
// }











/////////////////////////////////// 
// Remove all occurrences in string (TCS style)

#include <bits/stdc++.h>   // includes almost all standard C++ libraries
using namespace std;       // avoids writing std:: again and again


// Function that removes ALL occurrences of 'part' from string 's'
string removeOccurrences(string s, string part) {

    // Loop until substring is no longer found
    while (true) {

        // find() returns the index where 'part' starts in 's'
        // If not found, it returns string::npos
        int pos = s.find(part);   

        // If substring not found, stop the loop
        if (pos == string::npos)  
            break;

        // erase(start_index, length)
        // Removes 'part.length()' characters starting from index 'pos'
        s.erase(pos, part.length()); 
    }

    // Return the final modified string
    return s;
}


int main() {

    int T;                // number of test cases
    cin >> T;             // read number of test cases

    cin.ignore();         // IMPORTANT:
                          // removes leftover newline after cin >> T
                          // otherwise getline() will read empty line

    // Loop over all test cases
    while (T--) {

        string s, part;

        // Read the main string (can include spaces)
        getline(cin, s);      

        // Read the substring to remove
        getline(cin, part);   

        //

        // Call function and print result
        cout << removeOccurrences(s, part) << endl;
    }

    return 0;   // program ends successfully
}



Task: Efficient Object Detection + Robustness Analysis
Problem Statement

Train and optimize an object detection model on a small dataset (COCO subset / Pascal VOC / custom dataset with minimum 3 classes).

🔹 Part 1 — Model Training (Core Skill Test)

Train a pretrained object detection model (YOLO / Faster R-CNN).

Use transfer learning.

Report:

mAP@0.5

Precision

Recall

Explain in 5–6 lines:

Why you chose this architecture

Which backbone you used

🔹 Part 2 — Overfitting Check (Deep Thinking)

Dataset size is small.

Show training vs validation loss curve.

Explain:

Did overfitting occur?

What steps did you take to reduce it?

(Example: augmentation, freezing layers, weight decay, etc.)

🔹 Part 3 — Latency Optimization (Real-World Skill)

Reduce inference time by at least 20%.

Show:

FPS before optimization

FPS after optimization

Accuracy difference

Methods allowed:

Smaller input size

Lightweight backbone

Quantization

🔹 Part 4 — Failure Analysis (Most Important)

Show 5 incorrect predictions.

Explain:

Why model failed

Whether it’s data issue or model issue

How you would fix it

This tests real understanding.

📂 Submission Format

GitHub repository

README (clear setup steps)

Metrics + comparison table

Sample output images

Short explanation (max 2 pages PDF)

⏳ Deadline

24 Hours from assignment release

Late submission → Not evaluated.

🎯 Why This Assignment Is Strong

It tests:

Practical training

Optimization thinking

Overfitting understanding

Debugging ability

Real-world reasoning

If you want, I can now provide:

🔥 Evaluation rubric (100 marks)

🔥 Email template to send candidate

🔥 Harder version for 6-month intern

🔥 Research-level 24-hour challenge

Tell me candidate level (3-month intern or 6-month intern).

vanshtripathi108@gmail.com
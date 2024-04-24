#include <iostream>
#include <string>
using namespace std;

// Function to truncate the string based on specified conditions
string truncateString(string &s) {
    bool done = false;
    
    while (!done) {
        bool check1 = false, check2 = false, check3 = false;
        int len = s.length();  // Update the length of the string here

        // Check if the first character is divisible by 3
        if ((s[0] - '0') % 3 == 0) {
            s.erase(0, 1);
            check1 = true;
        }
        // Check if the last character is divisible by 3
        else if ((s[len - 1] - '0') % 3 == 0 && !check1) {
            s.erase(len - 1, 1);
            check2 = true;
        }
        // Check if the sum of first and last characters is divisible by 3
        else if ((s[len - 1] - '0' + s[0] - '0') % 3 == 0 && !check2) {
            s.erase(0, 1);
            s.erase(len - 2, 1);
            check3 = true;
        }
        // If none of the conditions are satisfied, exit the loop
        if ((!check1 && !check2 && !check3) || s.empty()) {
            done = true;
            if(s.empty()) s = "EMPTY";
        }
    }
    return s;
}

int main() {
    string s; 
    cout << "Enter a string: ";
    cin >> s;
    
    // Check if the input string is empty
    if (s.empty()) {
        cout << "Input string is empty.";
        return 1;
    }

    // Truncate the string and output the result
    string ans = truncateString(s);
    cout << "Truncated string: " << ans;
    
    return 0;
}

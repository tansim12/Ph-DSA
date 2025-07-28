#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string givenWord = "EGYPT";
    int position = s.find(givenWord); // পাওয়া গেছে ।

    while (position != string ::npos) // npos মানে কিছু পাওয়া যাই নাই । -১
    {
        /* code */
        s.replace(position, givenWord.length(), " ");
        position = s.find(givenWord, position + 1); // পরের position থেকে খুজা শুরু করতেছে ।
    }

    cout << s;
    return 0;
}


#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "abcabcabc";

    // 1. string::find("substring") → প্রথমবার substring কোথায় আছে
    size_t pos1 = s.find("abc");        // pos1 = 0
    cout << "find: " << pos1 << endl;

    // 2. string::find("substring", start_index) → নির্দিষ্ট পজিশন থেকে খোঁজা
    size_t pos2 = s.find("abc", 1);     // pos2 = 3
    cout << "find from index 1: " << pos2 << endl;

    // 3. string::find(char) → ক্যারেক্টার খোঁজা
    size_t pos3 = s.find('b');          // pos3 = 1
    cout << "find char 'b': " << pos3 << endl;

    // 4. string::find(char, start_index) → ক্যারেক্টার খোঁজা নির্দিষ্ট পজিশন থেকে
    size_t pos4 = s.find('b', 4);       // pos4 = 4
    cout << "find char 'b' from index 4: " << pos4 << endl;

    // 5. string::rfind("substring") → শেষ থেকে substring খোঁজা
    size_t pos5 = s.rfind("abc");       // pos5 = 6
    cout << "rfind: " << pos5 << endl;

    // 6. string::find_first_of("set") → যেকোনো একটি ক্যারেক্টার খুঁজে বের করে
    size_t pos6 = s.find_first_of("xycb"); // pos6 = 1 (because 'b' matches)
    cout << "find_first_of: " << pos6 << endl;

    // 7. string::find_last_of("set") → যেকোনো একটি ক্যারেক্টার খুঁজে বের করে, শেষ থেকে
    size_t pos7 = s.find_last_of("cb");     // pos7 = 8 ('c')
    cout << "find_last_of: " << pos7 << endl;

    // 8. string::find_first_not_of("set") → এমন প্রথম ক্যারেক্টার যেটা এই সেটে নাই
    string s2 = "aaabbbcxy";
    size_t pos8 = s2.find_first_not_of("abc"); // pos8 = 6 ('x')
    cout << "find_first_not_of: " << pos8 << endl;

    // 9. string::find_last_not_of("set") → এমন শেষ ক্যারেক্টার যেটা এই সেটে নাই
    size_t pos9 = s2.find_last_not_of("abc"); // pos9 = 7 ('y')
    cout << "find_last_not_of: " << pos9 << endl;

    // 10. Not found check
    if (s.find("xyz") == string::npos) {
        cout << "'xyz' not found!" << endl;
    }

    return 0;
}

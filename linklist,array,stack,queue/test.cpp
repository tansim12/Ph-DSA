// #include<iostream>

// int main ()
// {
//     int x = 30;
//     std:: cout << x << std::endl << " " << "Hello" << " ";
//     std :: cout << "Allah hu akbar";
//     return 0;
// }

// #include<iostream>

// int main ()
// {
//     int x ;
//     std:: cin >> x;
//     std:: cout << x << std::endl << " " << "Hello" << " ";
//     std :: cout << "Allah hu akbar";
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int x;
//     cin >> x;
//     cout << (char)x << endl // type casting
//          << " " << "Hello" << " ";
//     cout << "Allah hu akbar";
//     return 0;
// }

// EOF
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x;

//     while (cin >> x)// জতখন ইনপুট আছে ততখন প্রিন্ট হবে
//     {
//         /* code */
//         cout << x << endl;
//     }

//     return 0;
// }

// setprecision ---> দশমিকের পরে কয় ঘর নিব
// #include <iostream>
// #include <iomanip>// input output manipulation
// using namespace std;

// int main()
// {
//     double x = 3.03393;

//     cout << fixed << setprecision(2) << x ;

//     x > 4 ? cout << "Big" : cout << "Small";

//     return 0;
// }

// Switch
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x ;
//     cin >> x;

//    switch (x)
//    {
//    case 1:
//     /* code */
//     cout << "Friday";
//     break;
//    case 2:
//     /* code */
//     cout << "Saturday";
//     break;
//    case 3:
//     /* code */
//     cout << "Sunday";
//     break;

//    default:
//    cout << "Kono din nai";
//     break;

//    }

//     return 0;
// }

// min, max, swap
// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     int x, y;
//     cin >> x >> y;

//     // swap
//     swap(x, y);

//     // min
//     cout << min(x, y) << endl;

//     // min multi value
//     cout << min({
//                 9,
//                 39,
//                 94,
//             })
//          << endl;

//     // max
//     cout << max(x, y) << endl;
//     // cout << swap(x,y) << endl;

//     cout << "X-> " << x << endl
//          << "Y-> " << y;

//     return 0;
// }

// string
// #include <iostream>
// using namespace std;

// int main()
// {
//     int x,y ;
//     char string[100];
//     cin >> x >> y;

//     cin.ignore(); // enter কে ignore করে ।

//     // input string
//     cin.getline(string,100);

//     cout << x << endl << string << endl << y;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     string s ;
//     cin >> s;
//     cout << s ;

//     return 0;
// }

// dynamic array
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int *arr = new int[5];

//     for (int i = 0; i < 5; i++)
//     {
//         /* code */
//         cin >> arr[i];
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         /* code */
//         cout << arr[i] << " ";
//     }

//     return 0;
// }



// dynamic array fn return
// fn return এর পরে ও dynamic array এর ভালু পাওয়া যাই । কিন্তু static array এর ভালু পাওয়া যাই না । 
// #include <bits/stdc++.h>
// using namespace std;

// int *fn()
// {
//     // int arr[5];
//     int *arr = new int[5];
//     for (int i = 0; i < 5; i++)
//     {
//         /* code */
//         cin >> arr[i];
//     }

//     return arr;
// }

// int main()
// {

//     int *mainArray = fn();
//     for (int i = 0; i < 5; i++)
//     {
//         /* code */
//         cout << mainArray[i] << " ";
//     }

//     return 0;
// }


// dynamic array size increment 
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int *arr1 = new int[3];
//     for (int i = 0; i < 3; i++)
//     {
//         /* code */
//         cin >> arr1[i];
//     }

//     // new array 
//     int *arr2 = new int[5];

//     // copy array by the arr1;
//     for (int i = 0; i < 3; i++)
//     {
//         /* code */
//         arr2[i] = arr1[i];
//     }

//     arr2[3] = 33;
//     arr2[4] = 99;
    
//     delete[] arr1; // delete the arr1;



//     for (int i = 0; i < 5; i++)
//     {
//         /* code */
//         cout << arr2[i] << " ";
//     }
    
    
//     return 0;
// }
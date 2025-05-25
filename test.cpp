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


#include <iostream>
#include <iomanip>// input output manipulation
using namespace std;

int main()
{
    int x ;
    cin >> x;

   switch (x)
   {
   case 1:
    /* code */
    cout << "Friday";
    break;
   case 2:
    /* code */
    cout << "Saturday";
    break;
   case 3:
    /* code */
    cout << "Sunday";
    break;
   
   default:
   cout << "Kono din nai";
    break;

   }

    return 0;
}
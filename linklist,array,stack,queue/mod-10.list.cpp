#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int arr[3] = {1,2,3};
    // list<int>arr2(arr,arr+3);

    // vector<int> arr = {1,2,3};
    // list<int>arr2(arr.begin(),arr.end());

    list<int> arr2 = {10, 20, 30, 40, 50};

    // list<int> arr3 = {10, 20, 30, 40, 50};
    // int x = arr2.empty();
    // arr2.reverse();

    // arr2.resize(100,8);
    // cout << arr2.size() << endl ;

    // arr2.push_back(56);
    // arr2.pop_back();

    // arr2.insert(next(arr2.begin(), 1), 862); // index access and insert value 
    // arr2.insert(next(arr2.begin(), 1), arr3.begin(),arr3.end()); // insert a new array 

    // arr2.erase(next(arr2.begin(), 2));
    // arr2.erase(next(arr2.begin(), 0),next(arr2.begin(), 4));

    // replace(arr2.begin(),arr2.end(),10,100); // 1st এ কাকে replace korbo, 2nd এ কত দিয়ে replace করতে হবে । 


    // auto it =  find(arr2.begin(),arr2.end(),10);
    // if (it == arr2.end()) // খুজে না পেলে it array er last e চলে যাই । 
    // {
    //     /* code */
    //     cout << "Not found" << endl ;
    // }else {
    //     cout << "Found" << endl ;

    // }
    


    // arr2.remove(20);
    // arr2.sort(greater<int>());
    // arr2.unique(); // পাসাপাশি না পাইলে কিন্তু remove করে না । তাই আগে sort করে নিতে হবে । 
    // arr2.reverse();

    for (auto &&i : arr2)
    {
        cout << i << endl;
    }

    return 0;
}
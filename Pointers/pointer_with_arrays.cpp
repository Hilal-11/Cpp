#include<iostream>
using namespace std;

int main () {

    int arr[10] = {0};
    arr[0] = 99;
    arr[1] = 88;
    arr[2] = 78;
    // cout<<arr<<endl;
    // cout<<arr+1<<endl;
    // cout<<&arr[0]<<endl;

    // int *ptr = arr;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;


    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+2)<<endl;




    return 0;
}
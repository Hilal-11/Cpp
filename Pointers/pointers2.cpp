#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {


    // Pointer arithmatic

    // int num = 10;
    // int *ptr = &num;

    // cout<<num<<endl;
    // cout<<*ptr<<endl<<endl;

    // *ptr = *ptr + 1;
    // cout<<num<<endl;
    // cout<<*ptr<<endl<<endl;

    // num = num + 1;
    // cout<<num<<endl;
    // cout<<*ptr<<endl;


    int data[10];
    int *ptr = data;

    // cout<<data<<endl;
    // cout<<ptr<<endl<<endl;

    // for(int i = 0; i < 10; i++){
    //     cout<<ptr<<"\t";
    //     ptr = ptr+1;
    // }

    // cout<<data<<endl;
    // cout<<ptr<<endl;
    // cout<<&data[0]<<endl;

    // *ptr = 10;
    // cout<<data[0]<<endl; 
    // cout<<*ptr<<endl;


    // inserting value on arrays using pointer use for loop
    srand(time(0));
    int iter = 0;
    for(int i = 0; i < 10; i++){
        *ptr = 1 +(rand() % (1 - 100 + 1));
        ptr = ptr + 1;
    }

    for(int i = 0; i < 10; i++) {
        cout<<data[i]<<"\t";
    }
    cout<<endl;







    return 0;
}
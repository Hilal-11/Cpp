#include<iostream>
using namespace std;

int main() {
    int num = 10;
    cout<<num<<endl;
    cout<<&num<<endl;

    int *ptr = &num;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;



    return 0;
}
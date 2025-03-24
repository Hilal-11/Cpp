#include<iostream>
using namespace std;

int main() {
    // int num = 10;
    // cout<<num<<endl;
    // cout<<&num<<endl;

    // int *ptr = &num;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;

    // char ch = 'A';
    // cout<<ch<<endl;

    // char *ptr = &ch;
    // cout<<*ptr<<endl;



    // double dl = 827.90;
    // cout<<dl<<endl;

    // double *ptr = &dl;
    // cout<<*ptr<<endl;

    int num = 100;
    int *ptr = &num;


    // cout<<num<<endl;
    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;

    cout<<sizeof(num)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(ptr)<<endl;



    double value = 90.78;
    double *ptr2 = &value;

    cout<<sizeof(value)<<endl;
    cout<<sizeof(ptr2)<<endl;
    
    cout<<endl;
    long double lg = 9938.3;
    long double *lgPtr = &lg;
    cout<<sizeof(lg)<<endl;
    cout<<sizeof(lgPtr)<<endl;




    return 0;
}
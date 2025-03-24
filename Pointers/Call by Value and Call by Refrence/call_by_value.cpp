#include<iostream>
using namespace std;


int call_by_value(int n) {
    n = n + 1;
    cout<<n<<endl;
}
int main() {

    int n = 99;
    cout<<n<<endl; // 99

    call_by_value(n); // 100 ---> because we pass the value as call by value , that means the copy on (n) are passed inside a function 

    cout<<n<<endl; // 99
    return 0;
}
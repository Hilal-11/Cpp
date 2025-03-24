#include<iostream>
using namespace std;

int call_by_refrence(int* n) {
    (*n)++;
    cout<<*n<<endl;
}
int main() {

    int n = 99;
    cout<<n<<endl; // 99

    call_by_refrence(&n); // 100

    cout<<n<<endl; // 100



    return 0;
}
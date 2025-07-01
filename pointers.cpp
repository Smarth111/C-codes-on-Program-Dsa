#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int* ptr = &a;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    //pointer to pointer
    int** ptr2=&ptr;
    cout<<ptr2<<endl;
}
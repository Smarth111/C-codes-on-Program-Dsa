#include <bits/stdc++.h>
using namespace std;
int main(){
    //used to give the value at the particular index *(&name of the variable) / *(ptr) index
    int a=10;
    int* ptr= &a;// ptr stores the adress of the value a
    cout<<*(&a)<<endl;
    cout<<*ptr<<endl;

}
// Q.No - 5 (Display this GP - 3,12,48,.. upto ‘n’ terms).

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A Number : ";
    cin>>n;

    int a = 3;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a = a * 4;
    }

}
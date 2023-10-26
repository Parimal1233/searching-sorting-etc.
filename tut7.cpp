#include<bits/stdc++.h>
using namespace std;

int main(){
    int var = 10;
    int *ptr = &var;

    cout<<"value present at address: "<<*ptr<<endl;  //value present at address
    cout<<"address of var: "<<&var<<endl;   //address of var
    cout<<"value of ptr: "<<ptr<<endl;    //value of ptr
    cout<<"address of ptr: "<<&ptr<<endl;   //address of ptr
    cout<<"value at var: "<<var<<endl;    //value at var

    float num = 0.001;
    float *pt = &num;

    cout<<endl;
    cout<<"value present at address: "<<*pt<<endl;  //value present at address
    cout<<"address of var: "<<&num<<endl;   //address of num
    cout<<"value of ptr: "<<pt<<endl;    //value of pt
    cout<<"address of ptr: "<<&pt<<endl;   //address of pt
    cout<<"value at var: "<<num<<endl;    //value at num

    cout<<endl;

    cout<<"Array using pointer:"<<endl;
    int arr[5] = {1,2,3,4,5};
    int *arrptr = &arr[0];
    // for(int i=0;i<5;i++){
    //     cout<<*arrptr<<endl;
    //     cout<<"address of "<<i<<": "<<arrptr<<endl;
    //     arrptr++;
    // }

    arrptr++;
    cout<<*arrptr;



}
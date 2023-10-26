#include<bits/stdc++.h>
using namespace std;

double sum(double num1,double num2,double num3){
    return num1+num2+num3;
}

double sum(double num1,double num2,int num3){
    return num1+num2+num3;
}

double sum(double num1,int num2,double num3){
    return num1+num2+num3;
}

double sum(double num1,int num2,int num3){
    return num1+num2+num3;
}

int sum(int num1,int num2,int num3){
    return num1+num2+num3;
}

double sum(int num1,double num2,double num3){
    return num1+num2+num3;
}

double sum(int num1,int num2,double num3){
    return num1+num2+num3;
}

double sum(int num1,double num2,int num3){
    return num1+num2+num3;
}

int main(){
// float + float + float
cout<<sum(5.9,3.6,3.3)<<endl;;

// float + float + integer
cout<<sum(5.9,3.6,3)<<endl;

// float + integer + float
cout<<sum(5.9,3,3.3)<<endl;

// float + integer + integer
cout<<sum(5.9,3,3)<<endl;

// integer + integer + integer
cout<<sum(5,3,3)<<endl;

// integer + float + float
cout<<sum(5,3.6,3.3)<<endl;

// integer + integer + float
cout<<sum(5,3,3.3)<<endl;

// integer + float + integer
cout<<sum(5.9,3.6,3.3)<<endl;


}
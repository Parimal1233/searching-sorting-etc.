#include<iostream>
using namespace std;

double sum(double num1,double num2){
    return num1+num2;
}

double sum(int num1,double num2){
    return num1+num2;
}

double sum(double num1,int num2){
    return num1+num2;
}

int sum(int num1,int num2){
    return num1+num2;
}

int main(){
// float + float
cout<<sum(5.9,3.6)<<endl;;

// integer + float
cout<<sum(5,3.6)<<endl;

// float + integer
cout<<sum(5.9,3)<<endl;

// integer + integer
cout<<sum(5,3);

}
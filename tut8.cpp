#include<bits/stdc++.h>
using namespace std;

int main(){
    // char str[10]={'S','I','T','E','&','T','C'};
    char str[50];
    char str1[50];
    int count = 0;
    cout<<"Enter a fullname:";
    cin.get(str,50);
    cout<<str<<endl;
    // for(int i=0;i<20;i++){
    //    if(str[i] == ' '){
    //     count;
    //    }else if(str[i] == '\0'){
    //     break;
    //    }else{
    //     count++;
    //    }
    // }

    // cout<<"The number of characters in the  string is: "<<count<<endl;

    for(int i=0;i<50;i++){
        if(i==0){
            cout<<"The initials are:"<<str[i];
        }else if(str[i] == ' '){
            cout<<" "<<str[i+1];
        }
    }
    } 
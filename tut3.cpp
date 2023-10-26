#include <iostream>
#include <bitset>
using namespace std;

int main(){

// int var = 22;
// cout << showbase << hex << var<<endl; 
// cout << showbase << oct << var<<endl;
// cout << showbase << dec << var<<endl;
// cout <<bitset<2>(var);

int num;
cin>>num;

if(num&1){
    cout<<"odd"<<endl;
}else{
    cout<<"Even"<<endl;
}

}



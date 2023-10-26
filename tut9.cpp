#include<bits/stdc++.h>
using namespace std;

class cube{
    public:
    double height;
    double width;
    double length;
    
};

int main(){
    class cube c;
    cout<<"Enter the length: ";
    cin>>c.length;
    cout<<"Enter the width: ";
    cin>>c.width;
    cout<<"Enter the height: ";
    cin>>c.height;
    int volume = c.length*c.width*c.height;

    cout<<volume<<endl;
}
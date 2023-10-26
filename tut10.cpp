#include<bits/stdc++.h>
using namespace std;

class cube{
    private:
    double height;
    double width;
    double length;

    public:
    cube(){
        cout<<"Enter the Length: ";
        cin>>length;
        cout<<"Enter the width: ";
        cin>>width;
        cout<<"Enter the height: ";
        cin>>height;
    }
    int vol(){
       int volume = length*width*height;
       return volume;
    }
    void update1(){
        cout<<"Enter the value of height: ";
        cin>>length;   
    }
    void update2(){
        cout<<"Enter the value of height: ";
        cin>>height;
    }
    void update3(){
        cout<<"Enter the value of height: ";
        cin>>width;
    }
    double getl(){
        return length;
    }
     double geth(){
        return height;
    }
     double getw(){
        return width;
    }
};


int main(){
    class cube c;
    int vol = c.vol();
    cout<<vol<<endl;
    c.update1();
    c.update2();
    c.update3();
    cout<<c.geth()<<" "<<c.getl()<<" "<<c.getw();
}    

    
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    int i=1;
    cout<<"The table of given nums is:\n";
    
//    With For Loop

	 for(int i=1;i<=10;i++)
    	{
    	    cout<<num<<" x "<<i<<" = "<<(num*i)<<endl;
    	}
//    With While Loop

     while(i<=10){
         cout<< (num) <<" x "<<i<<" = "<<(num*i)<<endl;
         i++;
     }

//   With Do While Loop 
    do{
        cout<< (num) <<" x "<<i<<" = "<<(num*i)<<endl;
        i++;
    }while(i<=10);
}

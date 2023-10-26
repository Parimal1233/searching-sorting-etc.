#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[5] = {3,1,0,2,2};
int size = 5;

for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]>arr[j])
            swap(arr[i],arr[j]);
    }
}

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
}
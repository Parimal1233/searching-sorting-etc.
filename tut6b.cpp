#include<bits/stdc++.h>
using namespace std;

int main(){
    int r1,r2,c1,c2;
    cout<<"Enter the row of matrix 1:"<<endl;
    cin>>r1;
    cout<<"Enter the column of matrix 1:"<<endl;
    cin>>c1;
    cout<<"Enter the row of matrix 1:"<<endl;
    cin>>r2;
    cout<<"Enter the row of matrix 1:"<<endl;
    cin>>c2;
    int arr[r1][c1] = {{1,2,3},{4,5,6},{5,6,7}};
    int arr1[r2][c2] = {{1,2,4},{4,6,6},{5,6,8}};
    int ans[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){     
           for(int k = 0;k<3;k++){
            if(c1 == r2){
            ans[i][j] += arr[i][k]*arr1[k][j];
            }else{
                cout<<"Error";
            }
           }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

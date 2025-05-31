//array of addition of 2d
#include<iostream>
using namespace std;
int main()
{
    const int rows=2,cols=2;
    int mat1[rows1][cols1],mat2[rows2][cols2],product[rows1][cols2]={0};
    cout<<"enter array for the first matrix("<<rows1<<"x"<<cols1<<"):"<<endl;
    for(int i=0; i<rows1;i++){
      for(int j=0; j<cols1;j++){
        cin>>mat1[i][j];  
      }  
    }
    cout<<"enter array for the second matrix ("<<rows<<"x"<<cols<<"):"<<endl;
    for(int i=0; i<rows2;i++){
      for(int j=0; j<cols2;j++){
        cin>>arr2[i][j];  
      }  
    }
     for(int i=0; i<rows1;i++){
      for(int j=0; j<cols2;j++){
        for (int k=0;k<cols1;k++){
        product[i][j]=mat1[i][j]+mat2[i][j];
      }
    }
} 
    cout<<"product of two matrix:"<<endl;  
    for(int i=0; i<rows1;i++){
      for(int j=0; j<cols2;j++){
        cout<<product[i][j]<<" ";
      }
      cout<<endl;  
    }
    return 0;
}   
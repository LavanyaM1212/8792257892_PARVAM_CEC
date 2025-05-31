#include<iostream>
using namespace std;
int main() {
    int arr[]={5,10,15,20,25};//Example array
    int n=sizeof(arr)/sizeof(arr[0]);//number of elements
    int sum=0;
    for(int i=0;i<n; i++){
        sum+=arr[i];// add element to sum
    }
    float average=(float)sum/n;
    cout<<"Total(sum):"<<sum<<endl;
    cout<<"Average:"<<average<<endl;
    return 0;
}
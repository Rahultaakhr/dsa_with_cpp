#include <iostream>
using namespace std;
void reverseArray(int arr[],int n){
    int i=0;
    int j=n-1;
    while (i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    

}
int main (){
    int arr[7]={4,1,8,0,6,10,5};
    int n=7;
    reverseArray(arr,n);

    for (int i = 0; i <n; i++)
    {
       cout<<arr[i]<<" ";
    }
    

}
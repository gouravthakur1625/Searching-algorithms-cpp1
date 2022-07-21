#include<iostream>
using namespace std;
int linear_search(int n, int arr[], int key){

    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main()
{
    int n,key,i;
    cout<<"Enter the length of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the key you want to search"<<endl;
    cin>>key;
    if(linear_search(n,arr,key) == -1){
        cout<<"Key is not present"<<endl;
    }
    else{
        cout<<"The key is present on position "<<linear_search(n, arr, key);

    }
    

    return 0;
}
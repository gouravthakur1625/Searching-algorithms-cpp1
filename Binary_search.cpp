#include<iostream>
using namespace std;

int binary_search(int n, int arr[], int key){
    int s=0, e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int main(){
    int n, key;
    cout<<"Enter the length of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the key you want to search"<<endl;
    cin>>key;
    if(binary_search(n,arr,key) == -1){
        cout<<"Key is not present"<<endl;
    }
    else{
        cout<<"The key is present on position "<<binary_search(n, arr, key);

    }
    return 0;
    
}
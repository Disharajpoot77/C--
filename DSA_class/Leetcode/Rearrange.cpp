
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
 
     int pos[n], neg[n];
    int m=0;
    int p=0;

    for(int i=0; i<n; i++){

        if(arr[i]>=0){
           pos[p]=arr[i];
           p++;
        }
        else{
            neg[m]=arr[i];
            m++;
        }
    }
    int pi=0;
    int ni=0;
    for(int i=0; i<n; i+=2){
        arr[i]=pos[pi];
        pi++;

        arr[i+1]=neg[ni];
        ni++;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
     
  
}

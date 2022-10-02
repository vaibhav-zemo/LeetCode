#include<iostream>

using namespace std;

void printarray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }cout<<endl;
}



void swapalternate(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8] ={5,2,9,4,7,6,1,0};
    int odd[5] ={11,33,9,76,43};

    swapalternate(odd,5);
    printarray(odd,5); 
    return 0;
}
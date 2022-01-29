#include<iostream>
using namespace std;

void countingSort(int *arr, int n){
    
    int largest= -1;
    for(int i=0;i<n;i++){
        largest= max(largest, arr[i]);
    }
    
    int *freq= new int[largest+1]{0};
    
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    
    int j=0;
    for(int i=0;i<=largest;i++){
        while(freq[i]>0){
            arr[j]=i;
            freq[i]--;
            j++;
        }
    }
    
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	countingSort(arr, n)
	
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
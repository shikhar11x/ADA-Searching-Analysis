#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

int linearSearch(vector<int>& arr,int value){
    int stepCount=0;
    for(int i=0;i<arr.size();i++){
        stepCount++; 
        if (arr[i]==value){return stepCount;}
    }
    return stepCount;
}

int binarySearch(vector<int>& arr,int value){
    int stepCount=0;
    int left=0;
    int right=arr.size()-1;
    while (left<=right){
        stepCount++; 
        int mid=(left+right)/2;
        if(arr[mid]==value){return stepCount;}
        else if(arr[mid]<value){left=mid+1;}
        else{right=mid-1;}
    }
    return stepCount;
}

void analyzesearchingalgorithms(){
    vector<int> inputSizes={10,20,30,40};
    for(int i=0;i<inputSizes.size();i++){
        int size=inputSizes[i];
        vector<int> arr(size);
        for(int i=0;i<size;i++){
            arr[i]=i+1; 
        }
        int bestcase=arr[0];          
        int worstcase=arr[size-1];
        cout<<rand();
        int randomindex=rand()%size;
        cout<<"random = "<<randomindex;
        // cout<<"Random Index: "<<randomindex<<endl;
        int randomcase=arr[randomindex]; 
        cout<<"=================== Input Size: "<<size<<" ==================="<<endl<<endl;
        cout<<"Linear Search---------"<<endl;
        cout<<"Best Case= "<<linearSearch(arr,bestcase)<<"steps"<<endl;
        cout<<"Average Case= "<<linearSearch(arr,randomcase)<<"steps\n";
        cout<<"Worst Case= "<<linearSearch(arr,worstcase)<<"steps\n";
        cout<<"Binary Search----------"<<endl;
        cout<<"Best Case= "<<binarySearch(arr,arr[(size-1)/2])<<"steps"<<endl;
        cout<<"Average Case= "<<binarySearch(arr,randomcase)<<"steps"<<endl;
        cout<<"Worst Case= "<<binarySearch(arr,worstcase)<<"steps"<<endl; 
        cout<<"==================================================================="<<endl<<endl;
    }
}

int main(){
    cout<<endl;
    analyzesearchingalgorithms();
}

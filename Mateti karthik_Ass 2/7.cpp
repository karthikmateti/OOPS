#include<iostream>
using namespace std;

class sorter{
private:
    int arr[100];
    int n; //no of elements
public:
    void input(){
        cout<<"enter no of elements:";
        cin>>n;
        cout<<"enter"<<n<<"elements:";
        for(int i=0;i<n;i++)
            cin>>arr[i];
    }
    void display(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    //bubble sort
    void bubbleSort(){
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1])
                    swap(arr[j],arr[j+1]);
            }
        }
        cout<<"array after bubble sort:";
        display();
    }
    // Insertion Sort
    void insertionSort() {
        for(int i=1;i<n;i++) {
            int key=arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>key) {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
        cout<<"Array after Insertion Sort: ";
        display();
    }
    // Selection Sort
    void selectionSort() {
        for(int i=0;i<n-1;i++) {
            int minIndex=i;
            for(int j=i+1;j<n;j++) {
                if(arr[j]<arr[minIndex])
                    minIndex=j;
            }
            swap(arr[i],arr[minIndex]);
        }
        cout << "Array after Selection Sort: ";
        display();
    }

};

int main() {
    sorter s;
    int choice;
    s.input();
    cout<< "Choose Sorting Algorithm:";
    cout<< "1. Bubble Sort\n";
    cout<< "2. Insertion Sort\n";
    cout<< "3. Selection Sort\n";
    cout<< "Enter choice: ";
    cin>>choice;
    switch(choice){
        case 1:
            s.bubbleSort();
            break;
        case 2:
            s.insertionSort();
            break;
        case 3:
            s.selectionSort();
            break;
        default:
            cout << "Invalid choice!\n";
    }
    return 0;
}
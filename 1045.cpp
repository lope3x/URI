#include <iostream>
#include <cmath>

using namespace std;
void swap(float* a, float* b)  
{  
    float t = *a;  
    *a = *b;  
    *b = t;  
}  
  
/* This function takes last element as pivot, places  
the pivot element at its correct position in sorted  
array, and places all smaller (smaller than pivot)  
to left of pivot and all greater elements to right  
of pivot */
int partition (float arr[], int low, int high)  
{  
    float pivot = arr[high]; // pivot  
    int i = (low - 1); // Index of smaller element  
  
    for (int j = low; j <= high - 1; j++)  
    {  
        // If current element is smaller than the pivot  
        if (arr[j] < pivot)  
        {  
            i++; // increment index of smaller element  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
  
/* The main function that implements QuickSort  
arr[] --> Array to be sorted,  
low --> Starting index,  
high --> Ending index */
void quickSort(float arr[], int low, int high)  
{  
    if (low < high)  
    {  
        /* pi is partitioning index, arr[p] is now  
        at right place */
        int pi = partition(arr, low, high);  
  
        // Separately sort elements before  
        // partition and after partition  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  
int main(int argc, char const *argv[]){
    float a,b,c;
    cin>>a>>b>>c;
    float arr[3];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    int n = sizeof(arr) / sizeof(arr[0]);  
    quickSort(arr, 0, n - 1);
    a=arr[2];
    b=arr[1];
    c=arr[0];
    if(a>=b+c){
        cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else{
        if(pow(a,2)==pow(b,2)+pow(c,2)){
            cout<<"TRIANGULO RETANGULO"<<endl;
        }
        if(pow(a,2)>pow(b,2)+pow(c,2)){
            cout<<"TRIANGULO OBTUSANGULO"<<endl;
        }
        if(pow(a,2)<pow(b,2)+pow(c,2)){
            cout<<"TRIANGULO ACUTANGULO"<<endl;
        }
        if(a==b&&b==c){
            cout<<"TRIANGULO EQUILATERO"<<endl;
        }
        else if(a==b||b==c||c==a){
            cout<<"TRIANGULO ISOSCELES"<<endl;
        }
    }
    return 0;
}

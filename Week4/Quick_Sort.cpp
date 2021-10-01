#include<iostream>
using namespace std;
int comp=0,swaps=0;
void swap(int *p,int *q){
    int t;
    t=*p;
    *p=*q;
    *q=t;
    swap++;
}
int partition(int a[],int l,int h){
    int pivot = a[l];
    int i=l,j=h;
    while(i<j){
    do
    {   
        i++;
    } while (a[i]<=pivot);
   
    while (a[j]>pivot)
    {
        j--;
    }
    comp++;
    if(i<j)
        {comp++;
        swap(&a[i],&a[j]); }
    }
    swap(&a[l],&a[j]);
    return j;
}
void Quicksort(int a[],int l,int h){
    int j;
    if(l<h){
        comp++;
        j=partition(a,l,h);
        Quicksort(a,l,j-1);
        Quicksort(a,j+1,h);
    }
}
int main(){
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Quicksort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"comparison: "<<comp<<endl;
    cout<<"swaps: "<<swaps;
    
}
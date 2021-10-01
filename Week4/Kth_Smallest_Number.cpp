#include<iostream>
using namespace std;
void swap(int *p,int *q){
    int t;
    t=*p;
    *p=*q;
    *q=t;
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
    if(i<j)
        swap(&a[i],&a[j]);
    }
    swap(&a[l],&a[j]);
    return j;
}
int kthsmallest(int a[],int l,int h,int k){
    int j;
    if(l==h){
        if(l==k)
            return a[l];
        else
         return 0;
    }
    else{
        j=partition(a,l,h);
        if(j==k)
            return a[j];
        else if(j<k)
            return kthsmallest(a,j+1,h,k);
        else
           return  kthsmallest(a,l,j-1,k);
     
    }
}
int main(){
    int n,k;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int a[n+1];
    cout<<"Enter elements"<<endl;
    for(int i=1;i<n+1;i++){
        cin>>a[i];
    }
    cout<<"Enter kth smallest value: "<<endl;
    cin>>k;
    int key=kthsmallest(a,1,n,k);
    cout<<key;


    
}
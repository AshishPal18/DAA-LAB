#include<iostream>
#include<math.h>
using namespace std;
int jump(int a[],int n,int key){
    int l=0,c=0;
    int h=n-1;
    int m=sqrt(n);
    for(int i=0;i<m;i+=m){
        if(a[i]==key)
            return i;
        else if(a[i]<key)
            l=i+1;
        else if(a[i]>key)
            h=i-1;

    }
    for(l;l<=h;l++){
        if(a[l]==key)
                {   
                    return l;
                }
        }
        return -1;
}
int main(){
int t;
cout<<"Enter test cases"<<endl;
cin>>t;
while(t--){
    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter key to be searched"<<endl;
    cin>>key;
    int result=jump(a,n,key);
    if(result!=-1)
        cout<<"Key is found at index: "<<result<<endl;
    else
        cout<<"Key is not found"<<endl;
}

}
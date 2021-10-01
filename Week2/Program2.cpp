#include<iostream>
using namespace std;
int main(){
int t;
cout<<"Enter test cases"<<endl;
cin>>t;
while(t--){
    int n,c=0;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int sub=abs(a[i]-a[j]);
            if(key==sub)
                c++;
        }
    }
    cout<<c<<endl;
}

}
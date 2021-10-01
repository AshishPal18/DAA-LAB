#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a1[n];
        for(int i=0;i<n;i++){
            cin>>a1[i];
        }
        int m;
        cin>>m;
        int a2[m];
        for(int i=0;i<m;i++){
            cin>>a2[i];
        }
        int i=0,j=0,temp=0;
        while(i<n && j<m){
            if(a1[i]<a2[j])
                i++;
            else if(a1[i]>a2[j])
                j++;
            else if(a1[i]==a2[j]){ cout<<a1[i]<<" "; i++; j++;}
            else{temp=1;}
        }
        if(t==1){cout<<"no common elements"<<endl;}
    }
}
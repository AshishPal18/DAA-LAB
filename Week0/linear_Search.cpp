#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"Enter test cases"<<endl;
    cin>>t;
    while(t--){
        cout<<"Enter number of elements"<<endl;
        int n,c=0,comp=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<"Enter key to be searched"<<endl;
        int key;
        cin>>key;
        for(int i=0;i<n;i++){
            if(a[i]==key)
                {   comp++;
                    c=1;
                    break;
                }
            comp++;
        }
        cout<<"Number of comaprison is : "<<comp<<endl;
        if(c==1)
            cout<<"Key is found"<<endl;
        else
            cout<<"key is not found"<<endl;
    }

} 
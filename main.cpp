#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #else
    // online submission
    #endif
}




int main(){
    init_code();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int l=12 & 5 & 17 & 22;
    cout<<l<<endl;
    int t;
    cin>>t;
    while(t--){
        int n,a;
        cin>>n>>a;
        if(a%2!=0){
            if(n%2==0){
                cout<<"Even"<<"\n";
            }
            else{
                cout<<"Odd"<<"\n";
            }
        }
        else{
            if(n==1){
                cout<<"Even"<<"\n";
            }
            else{
                cout<<"Impossible"<<"\n";
            }
        }

        
    }
    

    
    return 0;
    
}
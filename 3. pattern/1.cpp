#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int row=1;row<=n;row++){
        if(row==1){
            for(int i=1;i<=n;i++) cout<<i<<" ";cout<<endl;
        }

        for(int col=1;col<=n;col++){
            if(col==1) cout<<row<<" ";
            cout<<"* ";
        }
         cout<<endl;
    }
    return 0;
}
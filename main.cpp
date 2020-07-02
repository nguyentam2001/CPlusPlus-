#include <iostream>
#include<cmath>
using namespace std;
float count_x(int n,float x){
    float sn=0;
    float tu=1;
    int mau=1;
    if(n<2){
        sn=n*n*x*x;
    }
    if(n>=2&&x!=0){
        for(int i=1;i<=n;i++){
            tu=tu*sqrt(x);
            mau+=i+1;
            sn+=1.0*tu/mau;
        }
    }
    cout<<sn;
    return 0;
}

int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    float x;
    cout<<"enter x"<<endl;
    cin>>x;
    cout<<endl;
    count_x(n,x);
    return 0;
}

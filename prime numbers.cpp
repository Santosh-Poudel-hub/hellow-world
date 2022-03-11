#include<iostream>
using namespace std; 
int n,i,j,c;
int main(){
    cout<<"Enter the total number of numbers\n";
    cin>>n;
    cout<<"The prime number upto "<<n<<" are\n";
    for(i=2;i<=n;i++)
    {
        c=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
             c++;
            }
           
        }
        if(c==1)
        {
        cout<< i << "\n";
        }
        
    }
    return 0;
}


//22070123138
//Raghav Sadh


#include<iostream>

using namespace std;


int fact(int n)
{
    if (n>=1)
    {
        return (n*fact(n-1));
    }
    else{
        return 1;
    }
    
    
}

main()
{
    int n;
    int res;
  //recursion (direct and indirect)
    cout<<"Enter positive n for factorial"<<endl;
    cin>>n;

    res = fact(n);
    cout<<res;
    

}
//22070123138
//Raghav Sadh

#include <iostream> 
using namespace std; 
int sum(int n)
 {
   if(n == 0)
      return n;
   else
       return n + sum(n-1);
}
int main()
{
   int n ;
   cout<<"enter the number n to find the sum of first n integers"<<endl;

   cin>>n;

   cout<<"Sum of first "<<n<<" natural numbers is "<<sum(n);
   return 0;
}

//each subsequent step must with reduced no of steps
//exit path is needed where recursion is not called
#include<iostream>


using namespace std;


print_rev(char *str)
{
    cout<<"function called with "<<str;

    if (*str != '\0')
    {
        print_rev(str+1);
        cout << *str ;
    }
   
    
}

main()
{
    str = 
    cout<<print_rev(WELCOME)<<endl;

}

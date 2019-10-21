#include <iostream>  
using namespace std;  
int main()  
{  
  int n, i;  
  cout << "Enter the Number: ";  
  cin >> n;  
  
  for(i = 2; i <= n; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Number is not Prime."<<endl;  
          break;  
      } 
      else
      {
           cout<<"Number is Not Prime."<<endl;
           break;
      }  
  }
  return 0;  
}  

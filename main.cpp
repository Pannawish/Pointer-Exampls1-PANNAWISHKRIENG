#include <iostream>
#include <cstring>
#include <iomanip>
#include <string.h>
using namespace std;

int main(){
  /*int a;
  double d;
  cout<<&a<<" size "<<sizeof(a) <<endl;
  cout<<&d<<" size "<<sizeof(d) <<endl; 
  */
  
 /* int x,*p;
    p=&x;
    x=5;

    cout<< x  <<" "<< *p <<endl;
    cout<< &x <<" "<<  p <<endl;
    cout<< &p <<endl;
   int b=6;
   cout<< x  <<" "<< b << " "<< *p <<endl;
    x++;
   cout<< x  <<" "<< b << " "<< *p <<endl;
    p=&b; *p=2;
  cout<< x  <<" "<< b << " "<< *p <<endl;	*/
  
   
/*Example Array*/
  
/*int *ip;
int a[ ] = {31415, 21828};
ip = a;
// alternative:	ip = &a[0];

cout<<a<<endl;			
cout<<ip<<" "<<*ip<<endl;	
  
(*ip)++; 
cout<<a<<" "<<a[0]<<endl;		
cout<<ip<<" "<<*ip<<endl; 	
  
ip++; 
cout<<a<<endl;		
cout<<ip<<" "<<*ip<<endl; 	// print */

 /*the address is 4324, not 4321
 because the pointer is incremented 						
 by the size of an integer (4 bytes) */

char *pa, *pb, temp;
int i;
char a[1000]=  {};
  cout<<"Input string:";
  cin>>a;
  pa = &a[0];
  cout<< "Original: "; 
  for (i = 0; i <= strlen(a)-1; i++,pa++) 
    {
   cout<<setw(3)<<*pa<<" ";
    }
      pa = &a[0]; pb = &a[strlen(a)-1];
cout<<endl<<"Reverse : ";
for (i = 0; i < strlen(a) / 2; i++,pa++,pb--) {
    temp = *pa; 
    *pa = *pb; 
    *pb = temp;
}
  pa = &a[0];
  for (i = 0; i <= strlen(a)-1; i++,pa++) 
    {
   cout<<setw(3)<<*pa<<" ";
    }
}

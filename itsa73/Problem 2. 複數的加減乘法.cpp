#include <iostream> 
#include <cstdio> 
 
using namespace std; 
 
int main() 
{ 
    double a1,a2,b1,b2,result1,result2; 
    cin>>a1>>a2; 
    cin>>b1>>b2; 
     
    result1=a1+b1; 
    result2=a2+b2; 
     
    printf("(%.2f)+(%.2f)i\n",result1,result2); 
     
    result1=a1-b1; 
    result2=a2-b2; 
     
    printf("(%.2f)+(%.2f)i\n",result1,result2); 
     
    result1=a1*b1-a2*b2; 
    result2=a2*b1+a1*b2; 
     
    printf("(%.2f)+(%.2f)i\n",result1,result2); 
     
    return 0; 
}  

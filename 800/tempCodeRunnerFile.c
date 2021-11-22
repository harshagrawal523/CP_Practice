#include <stdio.h>


int main()
{   unsigned long long int  ans1,ans2,ans;
    unsigned long long int  n1 ; 

     printf("Enter Number 1: ");
    scanf("%llu", &n1);
    char c1;
    printf("Enter a character from the set{E, P, T, G, M, K, B, b}: ");
    scanf("%*c%c" , &c1);
    char operation;
    printf("Enter from the set{+, -}: ");
    scanf("%*c%c", &operation);
    unsigned long long int n2 = 0;
    printf("Enter Number 2: ");
    scanf("%llu", &n2);
    char c2;
    printf("Enter a character from the set{E, P, T, G, M, K, B, b}: ");
    scanf("%*c%c" , &c2);
    
    // printf("%c %c",c1,c2);
    if(c1=='b')
        ans1=n1;
    else if(c1=='B')
        ans1=8*n1;
    else if (c1=='K')
        ans1=8*1024*n1;
    else if(c1=='M')
        ans1=8*1024*n1*1024;
    else if(c1=='G')
        ans1=8*1024*1024*n1*1024;
    else if(c1=='T')
        ans1=8*1024*1024*1024*n1*1024;
    else if(c1=='P')
        ans1=8*1024*1024*1024*1024*n1*1024;
    else if(c1=='E')
        ans1=8*1024*1024*1024*1024*1024*n1*1024;
        
    if(c2=='b')
        ans2=n2;
    else if(c2=='B')
        ans2=8*n2;
    else if(c2=='K')
        ans2=8*1024*n2;
    else if(c2=='M')
        ans2=8*1024*n2*1024;
    else if(c2=='G')
      ans2=8*1024*1024*n2*1024;
    else if(c2=='T')
      ans2=8*1024*1024*1024*n2*1024;
    else if(c2=='P')
        ans2=8*1024*1024*1024*1024*n2*1024;
    else if(c2=='E')
        ans2=8*1024*1024*1024*1024*1024*n2*1024;
        
   if(operation=='+'){
    ans=ans1+ans2;
    }
    else if(operation=='-'){
        ans=ans1-ans2;
    }
    
    
    printf("%llu b \n",ans);
    
    

    return 0;
}
//
//  main.c
//  2
//
//  Created by dongfanghuaizhu on 2026/10/15.
//

#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int age;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&age);
        sum+=age;
    }
    double average=(double)sum/n;
    printf("%.2f\n",average);
    return 0;
        
        
        
    
}

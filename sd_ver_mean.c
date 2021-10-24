// WAP in c to calculate standard deviation, mean, variance
#include<stdio.h>
#include<math.h>
int main()      
{
    int i,n,r=0,s=0 ,a;
    float avg,sd,var, t;
    printf("How many data you want to calculate :: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter %dth term :: ",i);
        scanf("%d",&a);
        r=r+ a;
        s= s+(a*a);
    }
    printf("%d\n",r);
    printf("%d\n",s);
    avg =r/n;
     printf("%.2f\n",avg);
    t= (s/n) - pow((avg),2);
     printf("%.2f\n",t);
    var= t;
     printf("%.2f\n",var);
    sd= sqrt(var);
    printf("\nStandard deviation :: %.2f\nMean :: %.2f\nVariance :: %.2f",sd,avg,var);
}


#include<stdio.h>
int i;
typedef struct
{
    char name[25],rollno[10];
    float phy,bio,math,avg;
}student;
student input()
{
    student s;
    printf("\nInput Name :");
    scanf("%[^\n]s",s.name);
    printf("\nInput Roll Number :");
    scanf("%s",s.rollno);
    printf("\nInput marks for Physics, Biology & Mathematics:");
    scanf("%f %f %f",&s.phy,&s.bio,&s.math);
    s.avg=(s.phy + s.bio + s.math)/3;

    return (s);
}
void AboveAvg(student s[],int n)
{
    float classavg=0;
    for(i=0;i<n;++i)
        classavg+=s[i].avg;
    classavg/=n;
    printf("\nNames of above avg students:\n");
    for(i=0;i<n;i++)
        if (s[i].avg>classavg)
            printf("%s\n",s[i].name);
}
void Topper(student s[],int n)
{
    int high=0;
    for(i=1;i<n;++i)
        if (s[i].avg>s[high].avg)
            high=i;

    printf("\nTHE TOPPER\n");
    printf("Name:%s\n Roll No:%s\n",s[high].name,s[high].rollno);
}

void AboveBio(student s[],int n)
{
    float cnt=0;
    for(i=0;i<n;++i)
        if(s[i].bio>70)
            cnt++;

    printf("\nNumber of students getting above 70% in biology &d:\n",cnt);
}

int Sum(int a[],int n)
{
    int sum=0;
    for(i=0;i<n;++i)
        sum+=a[i];

    return(sum);
}

float Mean(int a[],int n)
{
    int sum=Sum(a,n);
    return((float)sum/n);
}

float Var(int a[],int n)
{
    float mean=Mean(a,n),s=0;
    for(i=0;i<n;++i)
        s+=(a[i] - mean)*(a[i] - mean);
    return(s/n);
}

void ArrayPhy(int a[],student s[],int n)
{
    for(i=0;i<n;i++)
        a[i]=s[i].phy;
}
int main()
{
    int n;
    int a[n];
    printf("Input no of students");
    scanf("%d",&n);
    student s[n];
    for(i=0;i<n;++i)
        s[i]=input();

    AboveAvg(s,n);
    Topper(s, n);
    AboveBio(s,n);

    ArrayPhy(a,s,n);

    printf ("\nThe mean of scores in Physics: ",Mean(a,n));
    printf ("\nThe variance of scores in Physics: ",Var(a,n));

}

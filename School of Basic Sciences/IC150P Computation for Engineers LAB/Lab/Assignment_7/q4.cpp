#include<iostream>
#include<stdio.h>


struct student
{
    char name[25],rollno[10],grade;
    float phy,bio,math,avg;
};
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
    switch((int)s.avg/10)
    {
        case 9:
            s.grade='O';
            break;
        case 8:
            s.grade='A';
            break;
        case 7:
            s.grade='B';
            break;
        case 6:
            s.grade='C';
            break;
        case 5:
            s.grade='D';
            break;
        case 4:
            s.grade='E';
            break;
        default:
            s.grade='F';
    }
    return (s);
}
void display(student x)
{
    printf("\nName : %s",x.name);
    printf("\nRoll Number : %s",x.rollno);
    printf("\nMarks Phy:%d \t Maths:%d \t Bio:%d",x.phy,x.math,x.bio);
    if(x.grade!='O')
        printf("\nGrade : %c\n",x.grade);
    else
        printf("\nGrade : A+\n");

}
void AboveAvg(student s[],int n)
{
    float classavg=0;
    for(int i=0;i<n;++i)
        classavg+=s[i].avg;
    classavg/=n;
    printf("\nNames of above avg students:\n");
    for(int i=0;i<n;i++)
        if (s[i].avg>classavg)
            printf("%s\n",s[i].name);
}
void Topper(student s[],int n)
{
    int high=0;
    for(int i=1;i<n;++i)
        if (s[i].avg>s[high].avg)
            high=i;

    printf("\nTHE TOPPER\n");
    printf("Name:%s\n Roll No:%s\n",s[high].name,s[high].rollno);
}

void AboveBio(student s[],int n)
{
    float cnt=0;
    for(int i=0;i<n;++i)
        if(s[i].bio>70)
            cnt++;

    printf("\nNumber of students getting above 70% in biology &d:\n",cnt);
}

int Sum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;++i)
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
    for(int i=0;i<n;++i)
        s+=(a[i] - mean)*(a[i] - mean);
    return(s/n);
}

void ArrayPhy(int a[],student s[],int n)
{
    for(int i=0;i<n;i++)
        a[i]=s[i].phy;
}
int main()
{
    int n;

    printf("Input no of students:");
    scanf("%d",&n);
    int a[n];
    student s[n];
    for(int i=0;i<n;++i)
        s[i]=input();

    AboveAvg(s,n);
    Topper(s, n);
    AboveBio(s,n);

    ArrayPhy(a,s,n);

    printf ("\nThe mean of scores in Physics: ",Mean(a,n));
    printf ("\nThe variance of scores in Physics: ",Var(a,n));

    for(int i=0;i<n;++i)
        display(s[i]);

}

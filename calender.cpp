#include<iostream>
using namespace std;
int dd,mm,yyyy,d,m,y,yy;
//int month[12]={0,3,3,6,1,4,6,2,5,0,3,5};
int month(int x)
{
    if(x==1 || x==01 || x==10)
    {
        return 0;
    }
    else if(x==02 || x==2 || x== 3 || x==03 || x==11)
    {
        return 3;
    }
    else if(x==4 || x==04 || x==07 || x==7)
    {
        return 6;
    }
    else if(x==05 || x==5)
    {
        return 1;
    }
    else if(x==06 || x==6)
    {
        return 4;
    }
    else if(x==8)
    {
        return 2;
    }
    else if(x==9 || x==12)
    {
        return 5;
    }
    else 
    {
        cout<<"Wrong Input .";
    }
}
//int week[7]={0,1,2,3,4,5,6};
void week(int x)
{
    if(x==0)
    {
        cout<<"-----> Sunday\n\n";
    }
    else if(x==1)
    {
        cout<<"-----> Monday\n\n";
    }
    else if(x==2)
    {
        cout<<"-----> Tuesday\n\n";
    }
    else if(x==3)
    {
        cout<<"-----> Wednesday\n\n";
    }
    else if(x==4)
    {
        cout<<"-----> Thursday\n\n";
    }
    else if(x==5)
    {
        cout<<"-----> Friday\n\n";
    }
    else
    {
        cout<<"-----> Saturday\n\n";
    }
}
int year(int x)
{
    if(x%400==0)
    {
        return 6;
    }
    else if(x%400==1)
    {
        return 4;
    }
    else if(x%400==2)
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
void inputdd()
{
    int x;
    cout<<"Enter the day of the date in 'dd' formate    :";
    cin>>x;
    if(0<x && x<32)
    {
       dd=x;    
    }
    else
    {
        cout<<"Invalid Day.";
        inputdd();
    }
}
int inputmm()
{
    int x;
    cout<<"Enter the month of the date in 'mm' formate  :";
    cin>>x;
    if(0<x && x<13)
    {
       mm=x;    
    }
    else
    {
        cout<<"Invalid Day.";
        inputmm();
    }
}

int inputyyyy()
{
    cout<<"Enter the year of the date in 'yyyy' formate :";
    cin>>yyyy;
}
int res()
{
    inputdd();
    d=dd;
    inputmm();
    m=month(mm);
    inputyyyy();
    int yy00=0;
    yy00=yyyy/100;
    yy00*=100;
    //int yy=0;
    yy=yyyy%100;
    y=year(yy00);
    int rr=0;
    int q=yy/4;
    rr=d+m+y+yy+q;
    if(yyyy%4==0)
    {
        if(mm==1 || mm==2)
        {
            rr-=1;
        }
    }
    return (rr%7);
}
int main()
{ int x=1;
    while(x==1)
    {
    int del;
    del=res();
    week(del);
    }
}
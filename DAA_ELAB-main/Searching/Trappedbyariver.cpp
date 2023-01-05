#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  ramp1;
    string nm;
    double speed1,rate1,wr,time1,dist1;
    cin>>nm>>ramp1>>rate1>>wr;
    time1=sqrt(2.0*ramp1/rate1);
    speed1=time1*rate1;
    dist1=speed1*speed1/9.805;
    cout<<nm;
    printf(" will reach a speed of %.2f m/s on a %d ramp crossing %.1f of %.1f meters, ",speed1,ramp1,dist1,wr);
    if(dist1<(wr-5))
    cout<<"SPLASH!";
    else if(dist1>=(wr-5)&&dist1<=wr)
    cout<<"BARELY MADE IT!";
    else
    cout<<"LIKE A BOSS!";

}
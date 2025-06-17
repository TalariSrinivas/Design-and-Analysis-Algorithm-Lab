#include<bits/stdc++.h>
using namespace std;

struct Point{
    int x,y;
};

int main(){
    int n;
    cout<<"ENTER NO OF POINTS:";
    cin>>n;
    Point* p=new Point[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER POINT-"<<i+1<<" X,Y CORDINATES:";
        cin>>p[i].x>>p[i].y;
    }

    double minDist=INT_MAX;
    int indI,indJ;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            double d=sqrt(pow(p[i].x-p[j].x,2)+pow(p[i].y-p[j].y,2));
            if(d<minDist){
                minDist=d;
                indI=i;
                indJ=j;
            }
        }
    }
    cout<<"CLOSEST POINTS ARE:"<<p[indI].x<<","<<p[indI].y<<" AND "<<p[indJ].x<<","<<p[indJ].y<<endl;
    delete[] p;
    
    return 0;
}
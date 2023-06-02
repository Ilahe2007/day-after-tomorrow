#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll d,m,y;
	cin>>d>>m>>y;
	if(m==2){
		if((y%4==0 and y%100!=0) or (y%400==0 and y%100==0)){
			if(d==28){
				cout<<1<<" "<<m+1<<" "<<y<<endl;
			}else if(d==29){
				cout<<2<<" "<<m+1<<" "<<y<<endl;
			}else{
				cout<<d+2<<" "<<m<<" "<<y<<endl;
			}
		}else{
			if(d==27){
				cout<<1<<" "<<m+1<<" "<<y<<endl;
			}else if(d==28){
				cout<<2<<" "<<m+1<<" "<<y<<endl;
			}else{
				cout<<d+2<<" "<<m<<" "<<y<<endl;
			}
		}
	}else{
		if(m==1 or m==3 or m==5 or m==7 or m==8 or m==10){
			if(d==30){
				cout<<1<<" "<<m+1<<" "<<y<<endl;
			}else if(d==31){
				cout<<2<<" "<<m+1<<" "<<y<<endl;
			}else{
				cout<<d+2<<" "<<m<<" "<<y<<endl;
			}
		}else if(m==12){
			if(d==30){
				cout<<1<<" "<<1<<" "<<y+1<<endl;
			}else if(d==31){
				cout<<2<<" "<<1<<" "<<y+1<<endl;
			}else{
				cout<<d+2<<" "<<12<<" "<<y<<endl;
			}
		}else{
			if(d==29){
				cout<<1<<" "<<m+1<<" "<<y<<endl;
			}else if(d==30){
				cout<<2<<" "<<m+1<<" "<<y<<endl;
			}else{
				cout<<d+2<<" "<<m<<" "<<y<<endl;
			}
		}
	}
}

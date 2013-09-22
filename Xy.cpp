#include <iostream>

using namespace std;

int F_xy(int x, int y){
	   if(y==1) 
       return x; 
       if(x>1&&y>1) 
       return (F_xy(x,y-1)*x); 
} 

int main() {
	int a,b; 
	cout<<"请输入x与y的值"<<endl;
    cin>>a>>b; 
    cout<<F_xy(a,b)<<endl;
	return 0;

} 
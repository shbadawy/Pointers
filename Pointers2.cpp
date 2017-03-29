
#include <iostream>

using namespace std;

int main(){
int *arr[2], **p1;
int x =5,y=6,z=7;
int *X,*Y,*Z;
X=&x;Y=&y;Z=&z;
arr[0]=X;arr[1]=Y;arr[2]=Z;
p1=arr;
for (int i = 0 ; i< 3;i++){
	cout <<**p1<<" ";
	p1++;
}
cout <<endl;
}



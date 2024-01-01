#include <iostream>
#include <math.h>

using namespace std;

//Sadece toplama işlemini kullanarak çarpma işlemi
//yapan örnek kodu yazınız.(Recursive olarak)

//a * b =a+a+a...+a//b kadar toplama
//f(a,b)=a+a+a+...+a//b kadar toplama
//f(a,b-1)=a+a+a...+a//b-1 kadar toplama
//f(a,b)=a+f(a,b-1)
//
//f(a,0)=0 

int carpimR (int a, int b){
	if(b==0||a==0)
		return 0;
	if(b<0)
		return carpimR(0-a,0-b);//f(-5,3)=f(5,-3)//f(-5,-3),f(5,3)
	return a+carpimR(a,b-1);
}

//f(3,4) = 3 + f(3,3)
//f(3,3) = 3 + f(3,2)
//f(3,2) = 3 + f(3,1)
//f(3,1) = 3 + f(3,0)
//f(3,0) = 0 //yukarıya doğru işlem çözülür.

int carpim(int a, int b){
	int sonuc = 0;
	for(int i=0; i<b; i++){
		sonuc=sonuc+a;
	}
	return sonuc;
}
int main()
{
	cout << carpimR(3,4) << endl;
	cout << carpimR(2,8) << endl;
	cout << carpimR(8,5) << endl;
	cout << carpimR(-8,5) << endl;
	cout << carpimR(8,-5) << endl;	
	cout << carpimR(-8,-5) << endl;
}
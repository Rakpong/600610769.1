#include<iostream>

using namespace std;

int main()
{
	float x = 1, y = 0;
	while(x <= 68){
		x = x + 1;
		y = y + 1/x;
	}
	
	cout << y ;
	
	return 0;
}

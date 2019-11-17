#include <iostream>
#include <ctime> 
#include "Time.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	time_t n;//调用库函数； 
	Time t1(n);
	t1.printstandard();
	
	time(&n);
	Time t2(n);
	cout<<n<<endl;
	t2.printstandard();
	
	Time t3(23,59,59);
	t3.printuniversal();
	for(int i=0;i<5;i++)
	{
		t3.tick();
		t3.printuniversal();		
	}
	


	return 0;
}

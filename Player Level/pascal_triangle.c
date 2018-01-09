#include <stdio.h>

int main() {
	int inner,outter;
	for(outter=1;outter<8;outter++)
	{
	    for(inner=1;inner<outter;inner++)
	    {
	        printf("%d ",inner);
	    }
	    printf("\n");
	}
	return 0;
}

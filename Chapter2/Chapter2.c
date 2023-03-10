#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{
	unsigned int u_max = 0 - 1;

	char buffer[33];
	_itoa(u_max, buffer, 2);

	printf("decimal : %u\n", u_max);
	printf("binary : %s\n", buffer);

	//printf("%u", u_max);

	//unsigned int i = 0b11111111111111111111111111111111; // 0b는 뒤의 리터럴이 바이너리다라는 뜻이다.
	//unsigned int u = UINT_MAX;

	/*unsigned int u_max = UINT_MAX;
	unsigned int u_min = 0;
	signed int i_max = INT_MAX;
	signed int i_min = INT_MIN;

	printf("max of uint = %u\n", u_max);
	printf("min of uint = %u\n", u_min);
	printf("max of int = %d\n", i_max);
	printf("min of int = %d\n", i_min);*/

	/*printf("%d\n", i);
	printf("%u\n", u);*/

	/*printf("%u\n", sizeof(unsigned int));
	printf("%u", sizeof(i));*/

	return 0;
}

// 내용을 추가했다.
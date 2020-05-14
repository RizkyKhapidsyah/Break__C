#include <stdio.h>

inline int Jalankan_Break_Bagian1() {
	puts("===============");
	puts("CONTOH 1 : ");
	puts("===============\n");

	int j = 1000;

	for (int i = 1; i < j; i++) {
		if (i == 10) {
			break;
		}
		printf("%d\n", i);
	}

	return 0;
}
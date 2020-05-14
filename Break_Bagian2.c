#include <stdio.h>

inline int Jalankan_Break_Bagian2() {
	puts("\n===============");
	puts("CONTOH 2 : ");
	puts("===============\n");

	int j = 1000;

	for (int i = 1; i < j; i++) {
		printf("%d\n", i);

		if (i == 10) {
			break;
		}
	}

	return 0;
}
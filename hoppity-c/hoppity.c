#include <stdio.h>

int main(int argc, char *argv[]) {
	freopen(argv[1], "r", stdin);
	int n, i;
	scanf("%d", &n);
	for(i = 1; i <= n; ++i) {
		if(i % 3 == 0 && i % 5 == 0) printf("Hop\n");
		else if(i % 3 == 0) printf("Hoppity\n");
		else if(i % 5 == 0) printf("Hophop\n");
	}
	return 0;
}

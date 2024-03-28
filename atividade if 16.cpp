    #include <stdio.h>

int main() {
	int n1;
	
	printf("escolha um numero entre 1 e 12: ");
	scanf("%d", &n1);
	
	if(n1 <= 0) {
		printf("escolha um numero entre 1 e 12.");
	}else if(n1 == 1) {
		printf("janeiro");
	}else if(n1 == 2) {
		printf("fevereiro");
	}else if(n1 == 3) {
		printf("marco");
	}else if(n1 == 4) {
		printf("abril");
	}else if(n1 == 5) {
		printf("maio");
	}else if(n1 == 6) {
		printf("junho");
	}else if(n1 == 7) {
		printf("julho");
	}else if(n1 == 8) {
		printf("agosto");
	}else if(n1 == 9) {
		printf("setembro");
	}else if(n1 == 10) {
		printf("outubro");
	}else if(n1 == 11) {
		printf("novembro");
	}else if(n1 == 12) {
		printf("dezembro");
	}else	if(n1 >= 13) {
		printf("escolha um numero entre 1 e 12.");
}
}

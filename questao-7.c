#include <stdio.h>

int main () {
	int cand1=0,cand2=0,cand3=0,cand4=0,nulo=0,branco=0,continuar=1,total_votos=0,registro;

	while (continuar ==1) {
		printf("Digite o número do candidato para registrar o voto. Digite 5 para voto nulo. Digite 6 para voto branco\n");
		scanf("%d", &registro);

		if(registro == 1) {
			cand1++;
		}
		if(registro == 2) {
			cand2++;
		}
		if (registro == 3) {
			cand3++;
		}
		if(registro == 4) {
			cand4++;
		}
		if(registro == 5) {
			nulo++;
		}
		if(registro == 6) {
			branco++;
		}
		printf("Digite 1 para registrar mais um voto:");
		scanf("%d", &continuar);
		total_votos++;
	}
	printf("Total de votos do candidato 1: %d - Percentual dos votos %.2f\n", cand1, (float)cand1/(float)total_votos);
	printf("Total de votos do candidato 2: %d - Percentual dos votos %.2f\n", cand2, (float)cand2/(float)total_votos);
	printf("Total de votos do candidato 3: %d - Percentual dos votos %.2f\n", cand3, (float)cand3/(float)total_votos);
	printf("Total de votos do candidato 4: %d - Percentual dos votos %.2f\n", cand4, (float)cand4/(float)total_votos);
	printf("Total de votos nulos: %d - Percentual dos votos %.2f\n", nulo, (float)nulo/(float)total_votos);
	printf("Total de votos brancos: %d - Percentual dos votos %.2f\n", branco, (float)branco/(float)total_votos);
	printf("Total de votos: %d\n", total_votos);
}

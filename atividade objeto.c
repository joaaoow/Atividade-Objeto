#include<stdio.h>
#include<string.h>

struct loja{
	char nomeBoneco[70];
	char edicaoBoneco[70];
	int corBoneco;
	float precoBoneco;
};

int main() {
	struct loja b1;
	printf("Informe o nome do boneco: \n");
	fgets(b1.nomeBoneco, 70, stdin);
	b1.nomeBoneco[strcspn(b1.nomeBoneco, "\n")] = 0;
	printf("Informe a edição do boneco: \n");
	fgets(b1.edicaoBoneco, 70, stdin);
	b1.edicaoBoneco[strcspn(b1.edicaoBoneco, "\n")] = 0;
	printf("Escolha a cor do boneco: \n");
	printf("1- Branco.\n");
	printf("2- Preto.\n");
	printf("3- Azul.\n");
	printf("4- Vermelho.\n");
	scanf("%i", &b1.corBoneco);
	getch();
	system("cls");
	printf("Informe o preço do boneco: \n");
	scanf("%f", &b1.precoBoneco);
getch();
system("cls");
//impressão
	printf("Nome do boneco %s\n", b1.nomeBoneco);
	printf("Edição do boneco: %s\n", b1.edicaoBoneco);
		switch(b1.corBoneco) {
		case 1:
			printf("Cor Branco.\n");
		break;
		case 2:
			printf("Cor Preto.\n");
		break;
		case 3:
			printf("Cor Azul.\n");
		break;
		case 4:
			printf("Cor Vermelha.\n");
		break;
		default:
			printf("Essa opcão não existe.\n");
		break;
	}
	printf("Preço Boneco: %.2f", b1.precoBoneco);
return 0;
}

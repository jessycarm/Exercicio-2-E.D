
/*Ao ser informado a altura e o sexo de N pessoas (N < 100) (dica: use o scanf e uma estrutura de repetição), que seja calculado e escrito (dica: use o printf):
1.1. a altura média das N pessoas;
1.2.  a maior altura encontrada;
1.3. a altura média das mulheres e a altura média dos  homens;
1.4. a quantidade de homens;*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int sexo, i, qt_m = 0, qt_f = 0, N;
    float altura_m = 0, altura_f = 0, maior_f = 0, maior_m = 0, maior_alt = 0;
    float menor_m = 0, menor_f = 0, media = 0, total_m = 0, total_f = 0;
    float media_f = 0,  media_m = 0;

    printf("Informe um valor menor que 100:\n");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        printf("Informe o sexo do usuário:\n");
        printf("1- Feminino\n");
        printf("2- Masculino\n");
        scanf("%d", &sexo);
        if (sexo == 2) {
            qt_m++;
            printf("Informe a altura:\n");
            scanf("%f", &altura_m);
            total_m += altura_m;
            if (altura_m >= maior_m) {
                maior_m = altura_m;
            } else if (altura_m <= menor_m) {
                menor_m = altura_m;
            }

        } else if (sexo == 1) {
            qt_f++;
            printf("Informe a altura:\n");
            scanf("%f", &altura_f);
            total_f += altura_f;

            if (altura_f >= maior_f) {
                maior_f = altura_f;
            } else if (altura_f <= menor_f) {
                menor_f = altura_f;

            }
        } else {
            printf("Não é válido\n");
        }
    }

    if (maior_m >= maior_f) {
        maior_alt = maior_m;
    } else if (maior_f >= maior_m) {
        maior_alt = maior_f;
    }
    media = total_m + altura_f;
    media_f = total_f / qt_f;


    media_m = total_m / qt_m;

    printf("Média de altura total:%.2f\n", media/N);
    printf("Média de altura feminina: %.2f\n", media_f);
    printf("Média de altura masculina: %.2f\n", media_m);
    printf("Maior altura: %.2f\n", maior_alt);
    printf("Quantidade de homens: %d\n", qt_m);



}

















#include <stdio.h>
#include <string.h>

// Função para escrever números de 1 a 19
void escreverUnidades(int numero) {
    if (numero == 0) {
        printf("zero");
    }
    if (numero == 1) {
        printf("um");
    }
    if (numero == 2) {
        printf("dois");
    }
    if (numero == 3) {
        printf("tres");
    }
    if (numero == 4) {
        printf("quatro");
    }
    if (numero == 5) {
        printf("cinco");
    }
    if (numero == 6) {
        printf("seis");
    }
    if (numero == 7) {
        printf("sete");
    }
    if (numero == 8) {
        printf("oito");
    }
    if (numero == 9) {
        printf("nove");
    }
    if (numero == 10) {
        printf("dez");
    }
    if (numero == 11) {
        printf("onze");
    }
    if (numero == 12) {
        printf("doze");
    }
    if (numero == 13) {
        printf("treze");
    }
    if (numero == 14) {
        printf("quatorze");
    }
    if (numero == 15) {
        printf("quinze");
    }
    if (numero == 16) {
        printf("dezesseis");
    }
    if (numero == 17) {
        printf("dezessete");
    }
    if (numero == 18) {
        printf("dezoito");
    }
    if (numero == 19) {
        printf("dezenove");
    }
}

// Função para escrever números de 20 a 99
void escreverDezenas(int numero) {
    if (numero >= 20 && numero < 30) {
        printf("vinte");
        if (numero > 20) {
            printf(" e ");
            escreverUnidades(numero % 10);
        }
    }
    if (numero >= 30 && numero < 40) {
        printf("trinta");
        if (numero > 30) {
            printf(" e ");
            escreverUnidades(numero % 10);
        }
    }
    if (numero >= 40 && numero < 50) {
        printf("quarenta");
        if (numero > 40) {
            printf(" e ");
            escreverUnidades(numero % 10);
        }
    }
    if (numero >= 50 && numero < 60) {
        printf("cinquenta");
        if (numero > 50) {
            printf(" e ");
            escreverUnidades(numero % 10);
        }
    }
    if (numero >= 60 && numero < 70) {
        printf("sessenta");
        if (numero > 60) {
            printf(" e ");
            escreverUnidades(numero % 10);
        }
    }
    if (numero >= 70 && numero < 80) {
        printf("setenta");
        if (numero > 70) {
            printf(" e ");
            escreverUnidades(numero % 10);
        }
    }
    if (numero >= 80 && numero < 90) {
        printf("oitenta");
        if (numero > 80) {
            printf(" e ");
            escreverUnidades(numero % 10);
        }
    }
    if (numero >= 90 && numero < 100) {
        printf("noventa");
        if (numero > 90) {
            printf(" e ");
            escreverUnidades(numero % 10);
        }
    }
}

// Função para escrever números de 100 a 999
void escreverCentenas(int numero) {
    int centena = numero / 100;
    int resto = numero % 100;

    if (centena == 1 && resto == 0) {
        printf("cem");
    }
    if (centena == 1 && resto > 0) {
        printf("cento");
        if (resto < 20) {
            printf(" e ");
            escreverUnidades(resto);
        } else {
            printf(" e ");
            escreverDezenas(resto);
        }
    }
    if (centena == 2) {
        printf("duzentos");
        if (resto > 0) {
            printf(" e ");
            if (resto < 20) {
                escreverUnidades(resto);
            } else {
                escreverDezenas(resto);
            }
        }
    }
    if (centena == 3) {
        printf("trezentos");
        if (resto > 0) {
            printf(" e ");
            if (resto < 20) {
                escreverUnidades(resto);
            } else {
                escreverDezenas(resto);
            }
        }
    }
    if (centena == 4) {
        printf("quatrocentos");
        if (resto > 0) {
            printf(" e ");
            if (resto < 20) {
                escreverUnidades(resto);
            } else {
                escreverDezenas(resto);
            }
        }
    }
    if (centena == 5) {
        printf("quinhentos");
        if (resto > 0) {
            printf(" e ");
            if (resto < 20) {
                escreverUnidades(resto);
            } else {
                escreverDezenas(resto);
            }
        }
    }
    if (centena == 6) {
        printf("seiscentos");
        if (resto > 0) {
            printf(" e ");
            if (resto < 20) {
                escreverUnidades(resto);
            } else {
                escreverDezenas(resto);
            }
        }
    }
    if (centena == 7) {
        printf("setecentos");
        if (resto > 0) {
            printf(" e ");
            if (resto < 20) {
                escreverUnidades(resto);
            } else {
                escreverDezenas(resto);
            }
        }
    }
    if (centena == 8) {
        printf("oitocentos");
        if (resto > 0) {
            printf(" e ");
            if (resto < 20) {
                escreverUnidades(resto);
            } else {
                escreverDezenas(resto);
            }
        }
    }
    if (centena == 9) {
        printf("novecentos");
        if (resto > 0) {
            printf(" e ");
            if (resto < 20) {
                escreverUnidades(resto);
            } else {
                escreverDezenas(resto);
            }
        }
    }
}

// Função principal para escrever números até 999.999.999
void escreverNumero(int numero) {
    if (numero == 0) {
        printf("zero\n");
        return;
    }

    int milhao = numero / 1000000;
    int mil = (numero % 1000000) / 1000;
    int centena = numero % 1000;

    if (milhao > 0) {
        escreverCentenas(milhao);
        printf(" milhão");
        if (milhao > 1) {
            printf("s");
        }
        printf(" ");
    }

    if (mil > 0) {
        escreverCentenas(mil);
        printf(" mil ");
    }

    if (centena > 0) {
        escreverCentenas(centena);
    }

    printf("\n");
}

int main() {
    int numero;
    printf("Digite um número inteiro (0 a 999.999.999): ");
    scanf("%d", &numero);

    escreverNumero(numero);
    
    return 0;
}

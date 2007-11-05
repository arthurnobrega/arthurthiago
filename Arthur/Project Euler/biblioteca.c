

int acharSomaMultiplos3e5(int maximo) {
    int numero = 0;
    int soma = 0;
    while (numero < maximo) {
	if (((numero % 3) == 0) || ((numero % 5) == 0)) {
	    soma += numero;
	}
	numero++;
    }
    return soma;
}

int acharSomaFibonacci(int maximo) {
    int penultimo = 1, ultimo = 2, aux, soma = 2;
    while (ultimo <= maximo) {
	aux = ultimo;
	ultimo += penultimo;
	penultimo = aux;
	if ((ultimo % 2) == 0) {
	    soma += ultimo;
	}
    }

    return soma;
}

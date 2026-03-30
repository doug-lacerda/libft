char	*ft_strcat(char *dest, char *src)
{
	char *ptr;

	// 1. Guardo o endereço inicial de dest para retornar no fim
	ptr = dest;

	// 2. Movo o ponteiro 'edst'até o caractere nulo '\0'
	while (*dest != '\0')
	{
		dest++; // Avança o endereço de memória
	}

	// 3. Agora 'dest' está apontando exatamente para o fim da string original
	// Vamos copiar 'src' para lá
	while (*src != '\0')
	{
		*dest = *src; 	// O conteúdo de dest recebe o conteúdo de src
		dest++;			// Avança o ponteiro de destino
		src++;			// Avança o ponteiro de origem
	}

	// 4. Finaliza a nova string com o caractere nulo
	*dest = '\0';

	// Retorna o ponteiro original (que foi guardado no início)
	return (ptr);
}
/*
#include <stdio.h>
int main (void)
{
	char inicio[] = "Olá";	// No lugar de *inicio = "Olá"
	char fim[] = " Mundo";	// No lugar de *fim = "Mundo"

	printf("%s\n", ft_strcat(fim, inicio));

	return (0);
}*/
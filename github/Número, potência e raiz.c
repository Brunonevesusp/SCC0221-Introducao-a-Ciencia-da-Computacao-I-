// boa noite! primeiro vamos fazer o corpo inicial de um programa qualquer em C

#include <stdio.h>
#include <math.h>

// vamos incluir também o math.h, pois vai ser necessário para resolver a potencia e a raiz.

int main(void){
	

	// pronto, vamos ver o que o exercício pede 
	// aquelas ali são as máscaras de que falei, importante saber do que se tratam!!
	// vejamos o que está sendo pedido exatamente!
	// maravilha, vamos iniciar a fazer nosso código agora.

	int numero;

	// primeiro vamos declarar nossa variavel, não precisa atribuir valor, pois será responsábilidade do usuário fazê-lo
	// vou colocar ela aqui!!
	scanf("%d", &numero);

	// o "&" serve para enderecar a variavel! 
	// agora sim, vamos testar!

	double operacao1 = pow(numero, 10);

	// aqui, eu utilizei a double, pois essa variavel consegue armazenar um alto grau de precisão
	// a funcao pow() é fruto do #include <math.h>, sem ele não seria tão simples executar essa potencia
	// essa funcao tem dois parametros, ela vai pegar o numero, no argumento da esquerda e elevar ao argumento da direita
	// nesse caso temos numero elevado na decima potencia. 
	// como já falamos antes, o numero será digitado pelo usuario

	double operacao2 = sqrt(numero);

	// agora, semelhante a funcao anterior, usamos a double para manter uma precisao das casas decimais
	// a funcao sqrt() vem de square root, que é raiz quadrada
	// usando ela, declarando numero como argumento, vamos ter a raiz quadrada do numero;

	/*operacoes concluidas, agora nos resta fazer a parte "dificil", que é colocar os espacos em branco no output sem digitar nenhum espaco */

	printf("Numero:%3d\n",numero); // eu tinha esquecido o \n, importante para que o output siga para uma nova linha, sempre use!!

	// com essa funcao print, vamos ter o output do valor colocado pelo usuário em forma decimal.
	// se analisar o que escrevi, vai perceber que entre o % e o d, que são da mascara %d (decimal)
	// tem o numero 3, esse 3 significa o posicionamento do output, como o input é de dois digitos, 
	// ao colocarmos esse 3 entre a mascara, vamos fazer o output ocupar 3 digitos, mesmo que só possua 2.
	// é a partir desse conceito que vamos criar um espaco em branco sem utilizar um espaco de fato.
	// vale ressaltar que, como o input tem dois digitos decimal, se ao imprimir eu utilizasse %2d ou %1d, 
	// nada aconteceria, pois o espaco seria menor do que o originalmente ocupado, então não haveria distanciamento 
	// entre os dois pontos e o numero decimal. 
	// outro detalhe é que o espaco criado por esse artificio fica posicionado sempre a esquerda do numero, e cada digito a mais
	// de diferenca entre o %nd, em que n é um numero qualquer, e o numero de digitos do input equivale a um espaco. isso vai ficar mais claro quando compilarmos o programa.

	printf("%17.2e\n", operacao1);

	// aqui pelo mesmo conceito utilizei o 17, para criar espacos suficientes para que o output fique alinhado com o da primeira linha
	// assim como está nas instrucoes! vamos conferir elas de novo para relembrar
	// aquele alinhamento ali!!
	// o .2 logo após o 17 significa a quantidade de casas decimais que quero impressas, no exercicio foi estipulado que o output teria 2 casas decimais, então .2!
	// com isso chamamos o resultado da operacao1, que nos dará a potecia. 
	// farei o mesmo com a raiz, depois disso podemos rodar o codigo e ver se está tudo certo.
	// esqueci de mencionar, mas aqui utilizei %e, para numeros exponenciais!!

	printf("%13.2f\n", operacao2);

	// unica diferenca aqui é que utilizei float (%f), pois o numero possui casas decimais

	return 0;

	// pronto temos nosso código, demorou em? mas isso vai se tornando mais rapido com o tempo
	// como compilar vai do sistema operacional, terminal e compilador que você está utilizando, eu estou utilizando o gcc, que foi indicado pelo professor
	// meu sistema operacional é Mac OX então alguma coisa pode ser diferente, mas o codigo em si é o mesmo!!

	// OPA ESQUECEMOS ( eu sei que só eu esqueci, mas me ajuda nessa) DE PEDIR OS DADOS PARA O USUÁRIO, VAMOS ACRESCENTAR A FUNCAO SCANF!!

    // pronto temos nosso codigo funcionando qualquer duvida pode mandar!!

} 
programa
{
	/*
	 * Leia as 4 notas de um aluno e calcule a sua média
	 */
	funcao inicio()
	{
		real nota1, nota2, nota3, nota4

		//leia(nota1, nota2, nota3, nota4)
		
		escreva("Digite a primeira nota: ")
		leia(nota1)

		escreva("Digite a segunda nota: ")
		leia(nota2)

		escreva("Digite a terceira nota: ")
		leia(nota3)

		escreva("Digite a quarta nota: ")
		leia(nota4)

		//escreva( (nota1 + nota2 + nota3 + nota4) / 4 )

		//real media = (nota1 + nota2 + nota3 + nota4) / 4
		//escreva(media)

		real soma = nota1 + nota2 + nota3 + nota4
		real media = soma / 4
		escreva(media)

		

		
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 595; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */
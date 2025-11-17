# Estrututra-de-dados-lista
Um CRUD (Created, Read, Updated and Delete) feito em C, utilizando conceitos como ponteiros, lista simples encadeada e alocação de memória. Programa feito para atividade da faculdade.

INTRODUÇÃO
	Este trabalho tem como apresentar o desenvolvimento de um programa utilizando a linguagem C, como solução para o problema apresentado no enunciado da AVA1.
Desenvolvido utilizando conceitos fundamentais de alocação dinâmica, ponteiros, lista simples encadeada e organização de informações na memória.
A lista simples encadeada permite inserir, listar e remover itens de forma eficiente, sendo uma melhor alternativa ao uso de vetores.

OBJETIVO
	O objetivo desse programa é possibilitar que o usuário adicione, liste, e remova itens de uma lista. Cada item da lista possui um ID além de seu nome.

SOLUÇÃO
	O programa, com dito antes, utiliza uma lista simples encadeada, cada item da lista é categorizado por um ID, um nome e um ponteiro que aponta para o próximo nó da lista.
A lógica do programa foi organizada em um menu com 4 opções:

1-	Adicionar um item
Cria um novo item usando malloc (função para alocação de memória dinâmica), lê o nome digitado pelo usuário e insere o item ao final da lista.

2-	Listar os itens
Percorre a lista a partir do primeiro elemento, exibindo o ID e o nome de cada item.

3-	Remover item

Procura o item pelo ID. Se encontrado, ajusta os ponteiros para removê-lo da lista e libera espaço na memória

4-	Sair

Encerra o programa.

MENU 

<img width="847" height="440" alt="image" src="https://github.com/user-attachments/assets/290d89a0-fc09-43d3-9d3a-289bf197e6ca" />


ADICIONANDO UM ITEM

<img width="378" height="258" alt="image" src="https://github.com/user-attachments/assets/6d4d4394-d0ff-4234-b33e-2ec2e13fe8e3" />



ADICIONANDO UM SEGUNDO ITEM E LISTANDO ELES
	
<img width="475" height="575" alt="image" src="https://github.com/user-attachments/assets/ec551876-010a-4d6f-b57d-a0934a67f522" />


	
REMOVENDO UM ITEM

<img width="355" height="534" alt="image" src="https://github.com/user-attachments/assets/7c9d4ba7-1070-471a-a67b-3cc628356bd9" />


FINALIZANDO PROGRAMA

<img width="286" height="218" alt="image" src="https://github.com/user-attachments/assets/a966fbab-1489-46c2-b6c2-99eab4d01314" />

	
O programa só é finalizando quando o usuário escolhe a opção 4, pois dentro do loop do / while foi definido que enquanto a opção escolhida for diferente de 4(opcao !=4), continuar rodando o programa.

REFERÊNCIAS
•	PROGRAME SEU FUTURO. Curso de Programação em C: Lista encadeada, lista duplamente encadeada e lista circular (Aula 242). YouTube, 2021. Disponível em :https://www.youtube.com/watch?v=biTMaMxWLRc
•	WR KITS. Ponteiros em C: Se não aprender com esse vídeo, esquece! YouTube, 2019. Disponível em: https://www.youtube.com/watch?v=1Hgl4TU8CB0


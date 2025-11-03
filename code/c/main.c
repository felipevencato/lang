/*
#include <stdlib.h>
void stdlib () {
	system("ls -la");
}
*/
#include <stdio.h>

void printArgs (int argc, char** argv) {
	int i=argc;
	while (argc) printf ("%i - %s\n", (i - argc--), *argv++);
}
 void textBasic () {
	//Os dois formatos funcionam exatamente igual no printf
	char text[] = "asdf";
	char* text2 = "qwer";
	//Não funciona
	//char* text3 = { 'q', 'w', 'e', 'r'};
	//Obrigatório colocar o \0 manualmente
	char text4[] = { 'q', 'w', 'e', 'r', '\0'};
	printf ("Text1: %s\n", text);
	printf ("Text2: %s\n", text2);
	printf ("Text4: %s\n", text4);
 }

void textMatrix () {
	/*
	//Por que isso não funciona?
	char** textMatrix = {"sadf","1234"};
	//ou isso
	char[][] textMatrix = {"sadf","1234"};

	while(i){
		//Isso funciona para o argv mas não para array que eu criei
		//printf ("%s\n", *textMatrix++);
	}
	*/
	char* textMatrix[] = {"aasdfffasdfffasdfffasdfffasdfffasdfffsdfff","12341234", "zxcv"};
	//O tamanho não é a soma das strings e sim a soma dos ponteiros de arrays de caracteres
  //O tamanho de um ponteiro é 8 bytes
  //dividindo por 8 vc descobre o numero de strings
	int i = 0, size = sizeof textMatrix / 8;
	
	while(i < size) printf ("%s\n", textMatrix[i++]);
}

void arrayBasic () {
	int numbers[] = { 1, 2, 3, 4, 5 };
	//Não Funciona
	//int* numbers2 = {1,2,3,4,5};
	int i = 0, size = sizeof numbers;
	printf ("NumberArraySize: %i", size);
}

int basic (int argc, char** argv) { }

int main (int argc, char** argv) {
	//printArgs(argc, argv);
	//textBasic ();
	//textMatrix ();
	//arrayBasic ();
	return basic(argc, argv);
}

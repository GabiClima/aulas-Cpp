#include <stdio.h>
#include <string.h>

//script da professora//

void limpar_entrada () {
    char c;
    while ((c = getchar ()) != '\n' && c != EOF)
    {
    }
}

void ler_texto (char *buffer, int length) {
    fgets (buffer, length, stdin);
    strtok (buffer, "\n");
}

int main () {
    double salario1, salario2;
    char nome1[50], nome2[50];
    int idade1, idade2;
    char sexo1, sexo2;
    
    printf ("Nome da primeira pessoa: ");
    ler_texto (nome1, 50);
    printf ("Salario da primeira pessoa: ");
    scanf ("%lf", &salario1);
    printf ("Digite a idade da primeira pessoa: ");
    scanf ("%d", &idade1);
    printf ("Digite o sexo (F/M) da primeira pessoa: ");
    scanf (" %c", &sexo1); 
    limpar_entrada ();
    
    printf ("\n");
    printf ("Nome da segunda pessoa: ");
    // limpar_entrada ();
    ler_texto (nome2, 50);
    printf ("Salario da segunda pessoa: ");
    scanf ("%lf", &salario2);
    printf ("Digite a idade da segunda pessoa: ");
    scanf ("%d", &idade2);
    printf ("Digite o sexo (F/M) da segunda pessoa: ");
    scanf (" %c", &sexo2); 
    limpar_entrada ();
    
    printf ("\n\n*** RELATORIO DE DADOS ***\n\n");
    printf ("Nome 1: %s\n", nome1);
    printf ("Salario 1: %.2lf\n", salario1);
    printf ("Idade 1: %d\n", idade1);
    printf ("Sexo 1: %c\n", sexo1);
    
    printf ("\n");
    printf ("Nome 1: %s\n", nome1);
    printf ("Salario 1: %.2lf\n", salario1);
    printf ("Idade 1: %d\n", idade1);
    printf ("Sexo 1: %c\n", sexo1);
    
    return 0;
}
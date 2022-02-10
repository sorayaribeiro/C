#include<stdio.h>
#include<string.h>
struct cadastroAluno
{
char nome [50] ;
int codigo ;
int idade ;
} ;
int main ( ) 
{
struct cadastroAluno A[20] ;
int i ;
for ( i = 0 ; i < 2 ; i++)
{
printf ( "Inserir dados aluno %d\n" , i +1);
printf ( "Digite nome:\n" ) ;
scanf("%s",A[i].nome);
printf ("Digite codigo e idade:\n" ) ;
scanf ( " %d %d" , &A[i].codigo,&A[i].idade ) ;
}
for ( i = 0 ; i < 2 ; i++)
printf ( " %s %d %d \n" , A[i].nome ,A[i].codigo ,A[i].idade ) ;

}
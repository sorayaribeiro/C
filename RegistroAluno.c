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
struct cadastroAluno Alu1 , Alu2 ;
strcpy( Alu1.nome , "Joao Santos" ) ;
Alu1.codigo = 365833;
Alu1.idade = 19 ;
printf ( "Inserir Nome: " ) ;
scanf("%s",Alu2.nome);
printf( "Inserir codigo e idade: " );
scanf("%d%d",&Alu2.codigo,&Alu2.idade) ;
printf(" %s %d %d \n" , Alu1.nome,Alu1.codigo , Alu1.idade ) ;
printf(" %s %d %d \n" , Alu2.nome ,Alu2.codigo ,Alu2.idade ) ;
}
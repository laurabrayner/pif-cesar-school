#include <stdio.h>
#include <stdlib.h>;  \\ esse ";" não deveria existir
int Main()  \\ o "M" de main deveria ser minusculo
{
 int idade = 20;
 printf( A idade do aluno eh: %d anos.. , idade); \\ ele não colocou aspas no printf 
 cout << endl;  \\ isso não faz parte da linguagem C
 system("PAUSE");
 return 0;
}

Formato em que o código rodaria da melhor forma:

#include <stdio.h>
#include <stdlib.h>  

int main()
{
 int idade = 20;
 printf(" A idade do aluno eh: %d anos\n" , idade);
 system("PAUSE");
 return 0;
}






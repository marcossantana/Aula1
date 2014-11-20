#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int login;
    int senha;
    printf ("mudei algo\n");
    printf ("Digite seu login:\n");
    scanf ("%d", &login);
    printf ("Digite sua senha:\n");
    scanf ("%d", &senha);
    
    if(senha == 123)
    printf ("Logado");
    else
    printf ("Senha incorreta\n");
    system ("pause");
    return 0;
}

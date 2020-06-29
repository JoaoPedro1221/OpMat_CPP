#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

void soma()
{
    float v1, v2, v3;
    cout<<"Valor 1: ";
    cin>>v1;
    cout<<"Valor 2: ";
    cin>>v2;
    cout<<"Valor 3: ";
    cin>>v3;
    cout<<(v1+v2+v3);
}

void subtracao(float a, float b, float c)
{
    cout<<(a-b-c);
}

float multiplicacao()
{
    float v1, v2, v3;
    cout<<"Valor 1: ";
    cin>>v1;
    cout<<"Valor 2: ";
    cin>>v2;
    cout<<"Valor 3: ";
    cin>>v3;
    return (v1*v2*v3);
}

float divisao(float a, float b)
{
    return (a/b);
}

int bin (int a1,  int b1, int c1, int d1, int e1, int f1, int g1, int h1)
{
    int soma;
    soma = a1*pow(2,0) + b1*pow(2,1) + c1*pow(2,2) + d1*pow(2,3) + e1*pow(2,4) + f1*pow(2,5) + g1*pow(2,6) + h1*pow(2,7);
    return soma;
}
int dec(int soma)
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
    a=(soma%2);
    b=((soma/2)%2);
    c=((soma/4)%2);
    d=((soma/8)%2);
    e=((soma/16)%2);
    f=((soma/32)%2);
    g=((soma/64)%2);
    h=((soma/128)%2);
    i=((soma/256)%2);
    j=((soma/512)%2);
    k=((soma/1024)%2);
    l=((soma/2048)%2);
    m=((soma/4096)%2);
    n=((soma/8192)%2);
    o=((soma/16384)%2);
    p=((soma/32768)%2);
    cout<<"Seu numero em binario vai ser: ";
    cout<<p<<o<<n<<m<<l<<k<<j<<i<<h<<g<<f<<e<<d<<c<<b<<a<<endl;
}

float maior(float x, float y, float z)
{
    if (x>y && x>z)
    {
        return x;
    }
    else if (y>x && y>z)
    {
        return y;
    }
    else if (z>x && z>y)
    {
        return z;
    }
}

int main()
{
    char op;
    cout<<"Escolha o caractere que representa sua opcao: "<<endl;
    cout<<" +   -> Para Somar"<<endl;
    cout<<" -   -> Para Subtrair"<<endl;
    cout<<" *   -> Para Multiplicar"<<endl;
    cout<<" /   -> Para dividir"<<endl;
    cout<<" B   -> Para conversao Binario p/ Decimal"<<endl;
    cout<<" D   -> Para conversao Decimal p/ Binario"<<endl;
    cout<<" M   -> Para retornar maior de 3 numeros"<<endl;
    cout<<" S   -> Para sair do programa"<<endl;

    cout<<"Digite a opcao desejada: ";
    cin>>op;

    system("cls");

    if (op=='+')
    {
        soma();
    }

    else if (op=='-')
    {
        float v1, v2, v3;
        cout<<"Valor 1: ";
        cin>>v1;
        cout<<"Valor 2: ";
        cin>>v2;
        cout<<"Valor 3: ";
        cin>>v3;
        subtracao(v1, v2, v3);
    }

    else if (op=='*')
    {
        float resultado;
        resultado = multiplicacao();
        cout<<resultado;
    }

    else if (op=='/')
    {
        float v1, v2, resultado;
        cout<<"Valor 1: ";
        cin>>v1;
        cout<<"Valor 2: ";
        cin>>v2;
        resultado = divisao(v1, v2);
        cout<<resultado;
    }

    else if (op=='B' || op=='b')
    {
        int a, b, c, d, e, f, g, h, resultado;
        cout<<"Num1: ";
        cin>>a;
        cout<<"Num2: ";
        cin>>b;
        cout<<"Num3: ";
        cin>>c;
        cout<<"Num4: ";
        cin>>d;
        cout<<"Num5: ";
        cin>>e;
        cout<<"Num6: ";
        cin>>f;
        cout<<"Num7: ";
        cin>>g;
        cout<<"Num8: ";
        cin>>h;
        resultado = bin(a, b, c, d, e, f, g, h);
        system("cls");
        cout<<"O numero digitado foi: "<<h<<g<<f<<e<<d<<c<<b<<a<<endl;
        cout<<resultado;
    }

    else if (op=='D' || op=='d')
    {
    int soma1;
    cout<<"Digite a soma total: ";
    cin>>soma1;
    cout<<endl;
    dec(soma1);
    }

    else if (op=='M' || op=='m')
    {
    float a, b, c, resultado;
    cout<<"V1 :";
    cin>>a;
    cout<<"V2 :";
    cin>>b;
    cout<<"V1 :";
    cin>>c;
    resultado = maior(a, b, c);
    cout<<resultado;
    }

    else if (op=='S' || op=='s')
    {
        return 0;
    }
    else
    {
        cout<<"Operacao digitada incorreta!"<<endl<<"Leia atentamente o menu!"<<endl<<endl;
        return main();
    }

    return 0;
}

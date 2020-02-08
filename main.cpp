#include <iostream>

using namespace std;

//Declaración y definición de constantes
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif
#define PORCIENTO_IVA 16
#define PORCIENTO_ISR 11
#define PORCIENTO_RET_IVA 10
#define PORCIENTO_RET_ISR 10

int main()
{
    //Declaración de variables
    int ingreso,iva,subtotal,total;
    int retencionIva,retencionIsr;
    int centavosIva,centavosSubtotal,centavosRetIsr,centavosRetIva,centavosTotal;

    //Entrada de datos
    cout<<"CÁLCULO DE IMPUESTOS"<<endl;
    cout<<"Dame el ingreso: ";
    cin>>ingreso;
    ingreso*=100;

    //Cálculo de impuestos
    iva=ingreso*PORCIENTO_IVA/100;
    centavosIva=iva%100;

    subtotal=ingreso+iva;
    centavosSubtotal=subtotal%100;
    retencionIsr=ingreso*PORCIENTO_RET_ISR/100;
    centavosRetIsr=retencionIsr%100;
    retencionIva=ingreso*PORCIENTO_RET_IVA/100;
    centavosRetIva=retencionIva%100;
    total=subtotal-retencionIsr-retencionIva;
    centavosTotal=total%100;

    retencionIva/=100;
    retencionIsr/=100;
    subtotal/=100;
    iva/=100;
    total/=100;
    ingreso/=100;


    //Salida de datos
    system(CLEAR);
    cout<<"CÁLCULO DE IMPUESTOS\n"<<endl;
    cout<<"***Tabla Recibo de Honorarios***"<<endl;
    cout<<"Ingresos\t\t"<<ingreso<<endl;
    cout<<"(+)IVA\t\t\t"<<iva<<"."<<centavosIva<<endl;
    cout<<"(=)Subtotal\t\t"<<subtotal<<"."<<centavosSubtotal<<endl;
    cout<<"(-)Retención ISR\t"<<retencionIsr<<"."<<centavosRetIsr<<endl;
    cout<<"(-)Retención IVA\t"<<retencionIva<<"."<<centavosRetIva<<endl;
    cout<<"(=)Total\t\t"<<total<<"."<<centavosTotal<<endl;

    cout<<endl<<endl<<" entrar para terminar..."<<endl;
    cin.ignore();
    return 0;
}

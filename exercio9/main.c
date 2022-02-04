#include <stdio.h>
int guardar(int* residu, int* decenes){
    int multiplicador=1, i=1;
    do{
        multiplicador=multiplicador*2;
        i=i+1;
    }while(i<*decenes);
    if (*decenes==1){
        multiplicador=1;
    }
    printf("es multiplicara per %d \n",multiplicador);
    return multiplicador;
}

int base(){
    int num, aux=0, residu, decenes=0,multiplicador=0, decimal=0;
    
    do{
         printf("introdueix el numero binari que vols pasar a decimal: ");
         scanf("%d",&num);
         do{
            decenes=decenes+1;
            residu=num%10;
            num=num/10;
            if (residu ==0||residu==1){
                 multiplicador=guardar(&residu, &decenes);
                 printf("el numero partit per 10 es %d i el residuo %d que es mutiplicara %d \n",num,residu,multiplicador);
                 decimal=decimal+(residu*multiplicador);
            }
            else{
                base();
              }
        }while(num>0);
         printf("les decenes son: %d \n",decenes);
         aux=1;
    }while(decenes<1||decenes>7);
    return decimal;
}

int main()
{
  int decimal;
  decimal=base();
  printf("el teu numero en decimal es: %d",decimal);
}


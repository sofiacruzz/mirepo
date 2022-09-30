#include <stdio.h>

float exponenciacion(int a,int exp)
{
        float resp;
        if(exp==0)
                resp=1.0;
        else if(exp>0)

        {
          resp=a*exponenciacion(a,exp -1);
        }
        else if(exp<0)
        {
                resp=1.0/a*exponenciacion(a,exp +1);
        }
        return resp;
}

int main()
{
        int a;
        int exp;
        float resp;



        printf("Ingresa en numero que vas a expotenciar:");
        scanf("%d",&a);

        printf("Ingresa el exponente:");
        scanf("%d",&exp);

        resp=exponenciacion(a,exp);
        printf("respuesta:%.2f",resp);

        return 1;

}

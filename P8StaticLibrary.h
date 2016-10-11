#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Eduardo Ancira A01038029

libarary that allows you to make various conversions
*/


int asciiBinaryToInt(char *s){
//    printf("%d\n\n",strtol (s,&s,2));
//    return 1;
    int iAux = 0;
    int i=0;
    for ( i = 0; i < (strlen(s)); i++ ) {
        if(s[i]== '1'){;
            iAux= iAux + (int)pow(2,((strlen(s))-i-1));
        }
        else if (s[i]== '0'){

        }
        else{
           return iAux;
        }

   }
   return iAux;
}

int asciiHEXToInt(char *s){
//    printf("%d\n\n",strtol (s,&s,16));
//    return 1.0;
    int iAux = 0;
    int i=0;
    for ( i = 0; i < (strlen(s)); i++ ) {

            switch (s[i]){
                case'0':
                    iAux= iAux + (int)(0* pow(16,((strlen(s))-i-1)));
                break;

                case'1':
                    iAux= iAux + (int)(1*pow(16,((strlen(s))-i-1)));
                break;

                case'2':
                    iAux= iAux + (int)(2*pow(16,((strlen(s))-i-1)));
                break;

                case'3':
                    iAux= iAux + (int)(3*pow(16,((strlen(s))-i-1)));
                break;

                case'4':
                    iAux= iAux + (int)(4*pow(16,((strlen(s))-i-1)));
                break;

                case'5':
                    iAux= iAux + (int)(5*pow(16,((strlen(s))-i-1)));
                break;

                case'6':
                    iAux= iAux + (int)(6*pow(16,((strlen(s))-i-1)));
                break;

                case'7':
                    iAux= iAux + (int)(7*pow(16,((strlen(s))-i-1)));
                break;

                case'8':
                    iAux= iAux + (int)(8*pow(16,((strlen(s))-i-1)));
                break;

                case'9':
                    iAux= iAux + (int)(9*pow(16,((strlen(s))-i-1)));
                break;

                case'a':
                    iAux= iAux + (int)(10*pow(16,((strlen(s))-i-1)));
                break;

                case'b':
                    iAux= iAux + (int)(11*pow(16,((strlen(s))-i-1)));
                break;

                case'c':
                    iAux= iAux + (int)(12*pow(16,((strlen(s))-i-1)));
                break;

                case'd':
                    iAux= iAux + (int)(13* pow(16,((strlen(s))-i-1)));
                break;

                case'e':
                    iAux= iAux + (int)(14*pow(16,((strlen(s))-i-1)));
                break;

                case'f':
                    iAux= iAux + (int)(15*pow(16,((strlen(s))-i-1)));
                break;

                case'A':
                    iAux= iAux + (int)(10*pow(16,((strlen(s))-i-1)));
                break;

                case'B':
                    iAux= iAux + (int)(11*pow(16,((strlen(s))-i-1)));
                break;

                case'C':
                    iAux= iAux + (int)(12*pow(16,((strlen(s))-i-1)));
                break;

                case'D':
                    iAux= iAux + (int)(13* pow(16,((strlen(s))-i-1)));
                break;

                case'E':
                    iAux= iAux + (int)(14*pow(16,((strlen(s))-i-1)));
                break;

                case'F':
                    iAux= iAux + (int)(15*pow(16,((strlen(s))-i-1)));
                break;

                default:
                    return iAux;
                break;

        }

    }
    return iAux;
}
void asciiHEXToIntCon(char *s){
//    printf("%d\n\n",strtol (s,&s,16));
//    return 1.0;
    int iAux = 0;
    int i=0;
    for ( i = 0; i < (strlen(s)); i++ ) {

            switch (s[i]){
                case'0':
                    printf("%i",(int)(15*pow(16,1)));
                break;

                case'1':
                    printf("%i",(int)(1*pow(16,0)));
                break;

                case'2':
                    printf("%i",(int)(2*pow(16,0)));
                break;

                case'3':
                    printf("%i",(int)(3*pow(16,0)));
                break;

                case'4':
                    printf("%i",(int)(4*pow(16,0)));
                break;

                case'5':
                    printf("%i",(int)(5*pow(16,0)));
                break;

                case'6':
                    printf("%i",(int)(6*pow(16,0)));
                break;

                case'7':
                    printf("%i",(int)(7*pow(16,0)));
                break;

                case'8':
                    printf("%i",(int)(8*pow(16,0)));
                break;

                case'9':
                    printf("%i",(int)(9*pow(16,0)));
                break;

                case'a':
                    printf("%i",(int)(10*pow(16,0)));
                break;

                case'b':
                    printf("%i",(int)(11*pow(16,0)));
                break;

                case'c':
                    printf("%i",(int)(12*pow(16,0)));
                break;

                case'd':
                    printf("%i",(int)(13*pow(16,0)));
                break;

                case'e':
                    printf("%i",(int)(14*pow(16,0)));
                break;

                case'f':
                    printf("%i",(int)(15*pow(16,0)));
                break;

                case'A':
                    printf("%i",(int)(10*pow(16,0)));
                break;

                case'B':
                    printf("%i",(int)(11*pow(16,0)));
                break;

                case'C':
                    printf("%i",(int)(12*pow(16,0)));
                break;

                case'D':
                    printf("%i",(int)(13*pow(16,0)));
                break;

                case'E':
                    printf("%i",(int)(14*pow(16,0)));
                break;

                case'F':
                    printf("%i",(int)(15*pow(16,0)));
                break;

                default:
                    printf("\nerror: caracter no valido\n");

                break;

        }

    }

}


double asciiToDouble(char *s){
double iAux = 0;
    int i=0;

    for ( i = 0; i < strlen(s); i++ ) {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
             iAux += (double)s[i] * pow(100,((strlen(s))-i-1));
        }
        switch (s[i]){

        case '+':

            iAux += (double)s[i] * pow(100,((strlen(s))-i-1));
        break;


        case '-':

            iAux += (double)s[i] * pow(100,((strlen(s))-i-1));
        break;


        case '.':

            iAux += (double)s[i] * pow(100,((strlen(s))-i-1));
        break;
        default:
            printf("error: caracter no valido");
            break;
        }

   }


}


size_t strlen(const char *str) {
	size_t i;
	for(i = 0U; str[i]; ++i){
}
	return i;
}


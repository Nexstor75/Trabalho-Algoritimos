#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#define MAX 99999

int tamanho(){
    FILE *arquivo;
    double cont=1,raiz;
    char c;
    arquivo = fopen("D:\\Arquivos Gerais\\Desktop\\C\\Programacimeos\\dnahumano.txt","r"); // colocar o endereço aqui do .txt
    while(c=fgetc(arquivo)!=EOF){
        cont ++;
    }
    raiz=sqrt(cont);
    printf("cont=%f",raiz);
    fclose(arquivo);
    return(raiz);
}
void armazena(int tam,char mat[tam][tam]){
    FILE *arquivo;
    int i,i2;
    arquivo = fopen("D:\\Arquivos Gerais\\Desktop\\C\\Programacimeos\\dnasimeo.txt","r"); // colocar o endereço aqui do .txt
    char *string,c;
    string = &mat[0][0];
    printf("\n ------ \n");
        for(i=0;i<tam;i++){
            for(i2=0;i2<tam;i2++){
                mat[i][i2]=fgetc(arquivo);
                printf("%c  ",mat[i][i2]);
        }
        printf("\n");
        }
    fclose(arquivo);
}
void convertex(int tam, char mat[tam][tam], int mat2[tam][tam]){
    int maxtam=tam,il=0,ic=0;
    printf("\n");
    for (ic=0;ic<maxtam;ic++){
        for(il=0;il<maxtam;il++){
            if (mat[ic][il] == 'A'){mat2[ic][il]=1;}
            if (mat[ic][il] == 'C'){mat2[ic][il]=2;}
            if (mat[ic][il] == 'G'){mat2[ic][il]=3;}
            if (mat[ic][il] == 'T'){mat2[ic][il]=4;}
            printf("%i  ",mat2[ic][il]);
        }
        printf("\n");
    }
}
int resolve(int tam, int mat2[tam][tam]){
    int linha,coluna;
    for (coluna=0;coluna<tam;coluna++){
        for(linha=0;linha<tam;linha++){
            if(mat2[coluna][linha]==mat2[coluna][linha+1]){
                if(mat2[coluna][linha]==mat2[coluna][linha+2]){
                    if(mat2[coluna][linha]==mat2[coluna][linha+3]){
                        return(1);
                    }
                }
            }
        }
    }
    for (coluna=0;coluna<tam;coluna++){
        for(linha=0;linha<tam;linha++){
            if(mat2[coluna][linha]==mat2[coluna+1][linha]){
                if(mat2[coluna][linha]==mat2[coluna+2][linha]){
                    if(mat2[coluna][linha]==mat2[coluna+3][linha]){     
                        return(1);
                    }
                }
            }
        }
    }
    for(coluna=0;coluna<tam;coluna++){
        for(linha=0;linha<tam;linha++){
            if(mat2[coluna][linha]==mat2[coluna+1][linha+1]){
                if(mat2[coluna][linha]==mat2[coluna+2][linha+2]){
                    if(mat2[coluna][linha]==mat2[coluna+3][linha+3]){
                        return(1);
                    }
                }
            }
        }
    }
    for(coluna=0;coluna<tam;coluna++){
        for (linha=0;linha<tam;linha++){
            if(mat2[coluna][linha]==mat2[coluna+1][linha-1]){
                if(mat2[coluna][linha]==mat2[coluna+2][linha-2]){
                    if(mat2[coluna][linha]==mat2[coluna+3][linha-3]){
                        return(1);
                    }
                }
            }
        }
    }
}
void saida(int x){
    if (x==1){
        printf("voce eh macaco");
    }else{
        printf("voce eh humano");
    }
}
int main(){
    int tam=tamanho(),x;
    printf("tam==%i",tam);
    char mat[tam][tam];
    int mat2[tam][tam];
    armazena(tam,mat);
    convertex(tam,mat,mat2);
    x=resolve(tam,mat2);
    saida(x);
    return(0);
}

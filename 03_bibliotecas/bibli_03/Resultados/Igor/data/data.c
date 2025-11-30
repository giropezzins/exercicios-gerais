/**
 * @file data.h
 * @brief Biblioteca para manipulação de datas.
 * 
 * Esta biblioteca contém funções para verificar a validade de uma data, imprimir uma data por extenso,
 * verificar se um ano é bissexto, calcular o número de dias de um mês, comparar duas datas e calcular a
 * diferença em dias entre duas datas.
 * 
 */

#include <stdio.h>
#include "data.h"

/**
 * @brief Verifica se uma data é válida.
 * 
 * @param dia Dia da data.
 * @param mes Mês da data.
 * @param ano Ano da data.
 * @return int Retorna 1 se a data é válida e 0 caso contrário.
 */
int verificaDataValida(int dia, int mes, int ano){
    if(ano < 1){
        return 0;
    }
    if(mes < 1 || mes > 12){
        return 0;
    }
    int dias_mes;
    dias_mes = numeroDiasMes(mes, ano);

    if(dia < 1 || dia > dias_mes){
        return 0;
    }
    return 1;
}

/**
 * @brief Imprime o nome do mês por extenso.
 * 
 * @param mes Mês a ser impresso.
 */
void imprimeMesExtenso(int mes){

    switch (mes){
    case 1 :
        printf("Janeiro");
        break;
    case 2 :
        printf("Fevereiro");
        break;
    case 3 :
        printf("Marco");
        break;
    case 4 :
        printf("Abril");
        break;
    case 5 :
        printf("Maio");
        break;
    case 6 :
        printf("Junho");
        break;
    case 7 :
        printf("Julho");
        break;
    case 8 :
        printf("Agosto");
        break;
    case 9 :
        printf("Setembro");
        break;
    case 10 :
        printf("Outubro");
        break;
    case 11 :
        printf("Novembro");
        break;
    case 12 :
        printf("Dezembro");
        break;
    
    default:
        break;
    }
}

/**
 * @brief Imprime a data por extenso.
 * 
 * @param dia Dia da data.
 * @param mes Mês da data.
 * @param ano Ano da data.
 */
void imprimeDataExtenso(int dia, int mes, int ano){

    printf("%02d de ", dia);
    imprimeMesExtenso(mes);
    printf(" de %d\n", ano);
}

/**
 * @brief Verifica se um ano é bissexto.
 * 
 * @param ano Ano a ser verificado.
 * @return int Retorna 1 se o ano é bissexto e 0 caso contrário.
 */
int verificaBissexto(int ano){

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

/**
 * @brief Calcula o número de dias de um mês.
 * 
 * @param mes Mês a ser verificado.
 * @param ano Ano da data.
 * @return int Retorna o número de dias do mês.
 */
int numeroDiasMes(int mes, int ano){

    switch (mes){
    case 1 :
        return 31;
        break;

    case 2 :
        if(verificaBissexto(ano)){
            return 29;
        }
        return 28;
        break;

    case 3 :
        return 31;
        break;

    case 4 :
        return 30;
        break;

    case 5 :
        return 31;
        break;

    case 6 :
        return 30;
        break;

    case 7 :
        return 31;
        break;

    case 8 :
        return 31;
        break;

    case 9 :
        return 30;
        break;

    case 10 :
        return 31;
        break;

    case 11 :
        return 30;
        break;

    case 12 :
        return 31;
        break;
    
    default:
        break;
    }
}

/**
 * @brief Compara duas datas.
 * 
 * @param dia1 Dia da primeira data.
 * @param mes1 Mês da primeira data.
 * @param ano1 Ano da primeira data.
 * @param dia2 Dia da segunda data.
 * @param mes2 Mês da segunda data.
 * @param ano2 Ano da segunda data.
 * @return int Retorna 1 se a primeira data é maior que a segunda, -1 se a primeira data é menor que a segunda
 * e 0 se as datas são iguais.
 * A data ser "maior" significa que ela está mais no futuro.
 */
int comparaData(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2){

    if(ano1 > ano2){
        return 1;

    }else if(ano2 > ano1){
        return -1;

    }else if(ano1 == ano2){

        if(mes1 > mes2){
            return 1;

        }else if(mes2 > mes1){
            return -1;

        }else if(mes1 == mes2){

            if(dia1 > dia2){
                return 1;

            }else if(dia2 > dia1){
                return -1;

            }else if(dia1 == dia2){
                return 0;

            }
        }
    }
}


/**
 * @brief Calcula o número de dias até o mês.
 * 
 * @param mes Mês a ser verificado.
 * @param ano Ano da data.
 * @return int Retorna o número de dias até o mês.
*/
int calculaDiasAteMes(int mes, int ano){
    int dias = 0;
    for(int i = 1; i < mes; i++){
        dias += numeroDiasMes(i, ano);

    }
    return dias;
}

/**
 * @brief Calcula a diferença em dias entre duas datas.
 * 
 * @param dia1 Dia da primeira data.
 * @param mes1 Mês da primeira data.
 * @param ano1 Ano da primeira data.
 * @param dia2 Dia da segunda data.
 * @param mes2 Mês da segunda data.
 * @param ano2 Ano da segunda data.
 * @return int Retorna o número de dias de diferença entre as datas.
 */
int calculaDiferencaDias(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2){
    int diff_dias, diff_mes, diff_anos;

    if(comparaData(dia1, mes1, ano1, dia2, mes2, ano2) == 0){
        return 0;

    }else if(comparaData(dia1, mes1, ano1, dia2, mes2, ano2) == 1){
        diff_anos = ano1 - ano2;

        if(diff_anos == 0){
            if(mes1 == mes2){
                diff_dias = dia1 - dia2;

            }else{
                diff_dias = numeroDiasMes(mes2, ano2) - dia2;

                for(int i = mes2 + 1; i < mes1; i++){
                    diff_dias += numeroDiasMes(i, ano2);

                }
                diff_dias += dia1;
            }
        }else{
            diff_dias = numeroDiasMes(mes2, ano2) - dia2;

            for(int i = mes2 + 1; i <= 12; i++){
                diff_dias += numeroDiasMes(i, ano2);

            }
            if(diff_anos > 1){
                for(int i = 1; i < diff_anos; i++){
                    for(int j = 1; j <= 12; j++){
                        diff_dias += numeroDiasMes(j, (ano2 + i));
                    }
                }
            }
            diff_dias += calculaDiasAteMes(mes1, ano1);
            diff_dias += dia1;
        }

    }else if(comparaData(dia1, mes1, ano1, dia2, mes2, ano2) == -1){
        diff_anos = ano2 - ano1;

        if(diff_anos == 0){
            if(mes2 == mes1){
                diff_dias = dia2 - dia1;

            }else{
                diff_dias = numeroDiasMes(mes1, ano1) - dia1;

                for(int i = mes1 + 1; i < mes2; i++){
                    diff_dias += numeroDiasMes(i, ano1);

                }
                diff_dias += dia2;
            }
        }else{
            diff_dias = numeroDiasMes(mes1, ano1) - dia1;

            for(int i = mes1 + 1; i <= 12; i++){
                diff_dias += numeroDiasMes(i, ano1);

            }
            if(diff_anos > 1){
                for(int i = 1; i < diff_anos; i++){
                    for(int j = 1; j <= 12; j++){
                        diff_dias += numeroDiasMes(j, (ano1 + i));
                    }
                }
            }
            diff_dias += calculaDiasAteMes(mes2, ano2);
            diff_dias += dia2;
        }

    }
    return diff_dias;
}


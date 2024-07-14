#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 6

struct studente{
    char *nome;
    char *cognome;
    int matricola;
    float media;
};

typedef struct studente studente;

void stampa(studente stud[], int len);
void inserisciStudente(studente *stud, char *nome, char *cognome, int matricola, float media);
void ordinaMatricola(studente stud[], int len);
void ordinaNome(studente stud[], int len);
void ordinaCognome(studente stud[], int len);
void ordinaMedia(studente stud[], int len);

int main(){
    studente elenco[MAX];
    studente *p;

    p = elenco;

    inserisciStudente(p,"mario","rossi",1354,18.3);
    p++;
    inserisciStudente(p,"davide","verdi",3989,25.8);
    p++;
    inserisciStudente(p,"sara","bianchi",1254,29.8);
    p++;
    inserisciStudente(p,"maria","verdi",7854,27.5);
    p++;
    inserisciStudente(p,"elisa","neri",8673,22.3);
    p++;
    inserisciStudente(p,"chiara","verdi",2246,25.8);
    
    p = elenco; /*riporto indietro il mio puntatore*/
    
    printf("non ordinata\n");
    stampa(elenco, MAX);
    printf("ordino matricola\n");
    ordinaMatricola(elenco, MAX);
    stampa(elenco, MAX);
    printf("ordino nome\n");
    ordinaNome(elenco, MAX);
    stampa(elenco, MAX);
    printf("ordino cognome\n");
    ordinaCognome(elenco, MAX);
    stampa(elenco, MAX);
    printf("ordino media\n");
    ordinaMedia(elenco, MAX);
    stampa(elenco, MAX);

    return 0;    
}

void stampa(studente stud[], int len){
    for(int i=0; i<len; i++){
        printf("nome=%s, cognome=%s, matricola=%d, media=%f\n", stud[i].nome, stud[i].cognome, stud[i].matricola, stud[i].media);
    }
}

void inserisciStudente(studente *stud, char *nome, char *cognome, int matricola, float media){
    stud->nome = nome;
    stud->cognome = cognome;
    stud->matricola = matricola;
    stud->media = media;
}


void ordinaMatricola(studente stud[], int len){
    
    char *s_temp;
    int i_temp;
    float f_temp;

    for(int i=0; i<len; i++){
        for(int j=0; j<len-1; j++){
            if(stud[j].matricola > stud[j+1].matricola){
                
                /*scambio nome*/
                s_temp = stud[j].nome;
                stud[j].nome = stud[j+1].nome;
                stud[j+1].nome = s_temp;
                
                /*scambio nome*/
                s_temp = stud[j].cognome;
                stud[j].cognome = stud[j+1].cognome;
                stud[j+1].cognome = s_temp;
                
                /*scambio matricola*/
                i_temp = stud[j].matricola;
                stud[j].matricola = stud[j+1].matricola;
                stud[j+1].matricola = i_temp;
                
                /*scambio media*/
                f_temp = stud[j].media;
                stud[j].media = stud[j+1].media;
                stud[j+1].media = f_temp;

            }
        }
    }
}

void ordinaNome(studente stud[], int len){
    
    char *s_temp;
    int i_temp;
    float f_temp;

    for(int i=0; i<len; i++){
        for(int j=0; j<len-1; j++){
            if(strcmp(stud[j].nome, stud[j+1].nome) > 0){
                
                /*scambio nome*/
                s_temp = stud[j].nome;
                stud[j].nome = stud[j+1].nome;
                stud[j+1].nome = s_temp;
                
                /*scambio nome*/
                s_temp = stud[j].cognome;
                stud[j].cognome = stud[j+1].cognome;
                stud[j+1].cognome = s_temp;
                
                /*scambio matricola*/
                i_temp = stud[j].matricola;
                stud[j].matricola = stud[j+1].matricola;
                stud[j+1].matricola = i_temp;
                
                /*scambio media*/
                f_temp = stud[j].media;
                stud[j].media = stud[j+1].media;
                stud[j+1].media = f_temp;

            }
        }
    }
}

void ordinaCognome(studente stud[], int len){
    char *s_temp;
    int i_temp;
    float f_temp;

    for(int i=0; i<len; i++){
        for(int j=0; j<len-1; j++){
            if(strcmp(stud[j].cognome, stud[j+1].cognome) > 0){
                
                /*scambio nome*/
                s_temp = stud[j].nome;
                stud[j].nome = stud[j+1].nome;
                stud[j+1].nome = s_temp;
                
                /*scambio nome*/
                s_temp = stud[j].cognome;
                stud[j].cognome = stud[j+1].cognome;
                stud[j+1].cognome = s_temp;
                
                /*scambio matricola*/
                i_temp = stud[j].matricola;
                stud[j].matricola = stud[j+1].matricola;
                stud[j+1].matricola = i_temp;
                
                /*scambio media*/
                f_temp = stud[j].media;
                stud[j].media = stud[j+1].media;
                stud[j+1].media = f_temp;

            }
        }
    }
}


void ordinaMedia(studente stud[], int len){
    char *s_temp;
    int i_temp;
    float f_temp;

    for(int i=0; i<len; i++){
        for(int j=0; j<len-1; j++){
            if( stud[j].media > stud[j+1].media ){
                
                /*scambio nome*/
                s_temp = stud[j].nome;
                stud[j].nome = stud[j+1].nome;
                stud[j+1].nome = s_temp;
                
                /*scambio nome*/
                s_temp = stud[j].cognome;
                stud[j].cognome = stud[j+1].cognome;
                stud[j+1].cognome = s_temp;
                
                /*scambio matricola*/
                i_temp = stud[j].matricola;
                stud[j].matricola = stud[j+1].matricola;
                stud[j+1].matricola = i_temp;
                
                /*scambio media*/
                f_temp = stud[j].media;
                stud[j].media = stud[j+1].media;
                stud[j+1].media = f_temp;

            }
        }
    }
}
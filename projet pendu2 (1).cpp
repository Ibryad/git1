#include <stdio.h>

int main(void) {
int taille,e, i,Coup;
char lettre, a,u;
Coup=7;
u='_';
    printf("Bienvenue dans le jeu du pendu ! \n");
printf("joueur 1 : Saisissez la taille : ");
scanf("%d",&taille);
char tab[taille];
char motcache[taille];
printf("saisissez votre mot \n");
for(i=0 ; i < taille ; i++){
printf("----> ");
    getchar();
scanf("%c",&tab[i]);
    }
printf("votre mot est : ");
    for(i=0 ; i < taille ; i++ ){
    printf("%c",tab[i]);
    }
printf("\nEtes vous d'accord ? Oui(O) ou Non(N) : ");
getchar();
scanf("%c",&a);
   if(a == 'O'){
    getchar();
    for(i < 0 ; i < taille; i ++){
    printf("%c",motcache[taille - 1]);
   
    printf("La partie commence ! \n");
printf("le mot a trouver : %c",motcache[i]);
}
        motcache[0] = tab[0];
 motcache[taille-1] = tab[taille-1];
    for(i=1 ; i < taille-1 ; i++){
motcache[i]=u;
}
for(i = 0 ; i <= taille ; i++){
            printf("%c", motcache[i]);
}
while(Coup!=0){
printf("\nSaisir votre caractere : ");  //saisir le caractere // A
scanf("%c",&lettre);
getchar();
for(i=0;i<taille;i++){ //boucle

if(lettre == tab[i]){
e=1;
motcache[i]=lettre;
for(i=0;i<taille;i++){
printf("%c",motcache[i]);  // affichage du mot en parcourant le tableau
}
i=taille;
}
else{
e=0;
}
}  
if(e==0){
       Coup=Coup-1;
            printf("Dommage vous avez perdu un coup il vous reste %d coup \n",Coup);
           
}}

}
}

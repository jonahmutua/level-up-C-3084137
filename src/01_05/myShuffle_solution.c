#include <stdio.h>
#include <string.h>

#define DECKSIZE 26
#define HALFDECK 13

int count_elements(char *deck){
  static int count;
  while(*deck != '\0'){
    deck++;
    count++;
  }
  return count;
}
int main(){
 char original[DECKSIZE]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 char deck[DECKSIZE],shuffle[DECKSIZE];
 int count,s,d;
   strcpy(deck,original);
   count=0;
 while(1){
    for(d=0,s=0;d<HALFDECK;d++,s+=2){
      shuffle[s]=deck[d];
      shuffle[s+1]=deck[d+HALFDECK];
    }
    printf("%s\n",shuffle);
    if(!strcmp(shuffle,original))
    break;

    //reset deck to start over again
    strcpy(deck,shuffle);
 }
  

  return 0;
  
}
#include "lib.h"
float massimo(float numeri[], int dimensione){
  float massimo=0;
  for(int i=0;i<dimensione;i++){
    if(massimo<numeri[i]){
      massimo=numeri[i];
    }
  }
  return massimo;
}

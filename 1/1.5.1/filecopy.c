#include <stdio.h>

#define EXIT_SUCCESS 0

void standwhile();
void exprassigninwhile();

/* copy input to output; 1st version */

int main (int argc, char *argv[]){

  if(argc != 2){

    if((int)argv[1] == 's'){
      standwhile();
    }
    else if ((int)argv[1] == 'e'){
      exprassigninwhile();
    }

  }
  else {
    standwhile();
  }

  EXIT_SUCCESS;
}

void standwhile(){

/*
  note:  can use char --- but K&R wanted int "for subtle but important
  reason. ...  We can't use char since c must be large enough to hold EOF in addition to any possible char.  Therefore we must use int."
*/

  int c; // <------ *

  c = getchar();

  while (c != 'q'){
    // I used 'q' vs EOF --- because it permits termination without Ctrl-C
    putchar(c);
    c = getchar();
  }

}
void exprassigninwhile(){
  int c;
  while((c = getchar()) != 'q'){
    putchar(c);
  }
}

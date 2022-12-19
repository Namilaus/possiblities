#include <stdio.h>

int main(){
// ABC = CAB BCA ABC CBA ACB BAC 
// 012   201 120 012 210 021 102   
// ABC = 012 201 102 rest 120 210 021

char possibility[3];



for(int i = 0; i < 3; i++){
  scanf("%s",&possibility[i]);
}



  printf("%c",possibility[2]);
  printf("%c",possibility[0]);
  printf("%c\n",possibility[1]);

  printf("%c",possibility[1]);
  printf("%c",possibility[2]);
  printf("%c\n",possibility[0]);
  
  printf("%c",possibility[0]);
  printf("%c",possibility[1]);
  printf("%c\n",possibility[2]);
  
  printf("%c",possibility[2]);
  printf("%c",possibility[1]);
  printf("%c\n",possibility[0]);
  
  
  printf("%c",possibility[0]);
  printf("%c",possibility[2]);
  printf("%c\n",possibility[1]);
  

  printf("%c",possibility[1]);
  printf("%c",possibility[0]);
  printf("%c\n",possibility[2]);
  
  
  
  return 0;
}






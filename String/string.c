#include<stdio.h>
#include<string.h>

int main() {
  // Character Access and Modification

  char p[] = "procezzor";
  p[5] = 's'; // Replace 'z' with 's'
  p[6] = 's'; // Replace 'z' with 's'
  printf("%c\n", p[2]);
  printf("%s\n", p);

  //copy string
  char pan[] = "How vexingly quick daft zebras jump!";
  int len = strlen(pan)+1; // count lengh of string
    printf("%d\n",len);
  char dst2[len];
  strcpy(dst2, pan);// copy from pan to dst2
  printf("%s", dst2);

  // Concatenating Strings
  char s1[] = "London";
  char s2[] = " Bridge";
  strcat(s1, s2);
  printf("%s\n", s1);

  //Looping Through Strings
  char string1[] = "poolloop";
   for(int i = 0; i < strlen(string1)/2; i++){
    string1[i] = '#';
  }

  printf("%s", string1);
}
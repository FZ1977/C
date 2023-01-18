int main() {
  char *stringa1;
  char *stringa2;
  char appo;
  
  stringa1 = malloc(sizeof(char)*10);
  stringa2 = malloc(sizeof(char)*10);
  
  stringa1 = "stringa12";
  
  while(*stringa1 != '\0'){
    *stringa2 = *stringa1;
    stringa1++;
    stringa2++;
  }
  
  *stringa2='\0';
  
  return 0;
}
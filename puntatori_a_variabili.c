int main() {
  int *pa, *pb;
  int a, b;
  
  a=3;
  b=4;
  
  pa = &a;
  pb = &b;
  
  printf("Puntatore pa: %p - Puntatore pb: %p\n", pa, pb);
  printf("pa: %d - pb: %d\n", *pa, *pb);
  
  return 0;
}
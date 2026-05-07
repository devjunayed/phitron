#include<stdio.h>
int main(){
  int t;
  scanf("%d", &t);


  int arr[t] ;

  for(int i = 0; i < t; i++){
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d); 


    int one_person = m1 *d;
    int m2_person = one_person/(m1 + m2);

   
    arr[i] = d -m2_person;

    
  }

  for(int i = 0; i < t; i++){
    printf("%d\n", arr[i]);
  }

  return 0;
}
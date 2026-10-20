//lets find largest number in array//
 #include <stdio.h>
 int main(){
     int a[5] = {10,20,30,40,50};
     int max = a[0];

     for(int i = 1; i<5; i++){
         if(a[i]>max){
             max = a[i];

         }
     }
    printf("largest number in array is %d\n",max);

    return 0;
 }

//c program to find smallest number in an array

 #include <stdio.h>

int main() {
     int a[5] = {10, 25, 8, 40, 15};
    int min = a[0];

    for (int i = 1; i < 5; i++) {
         if (a[i] < min) {
            min = a[i];        
        
        }
    }

     printf("Smallest number = %d\n", min);

     return 0;
 }

//c program to calculete the sum of all array program
 #include <stdio.h>

 int main() {
     int a[5] = {10, 20, 30, 40, 50};
     int sum = 0;

    for (int i = 0; i < 5; i++) {     
         sum = sum + a[i];
     }

     printf("Sum = %d\n", sum);

    return 0;
 }

#include<stdio.h>
int main(){
    int a[3] = {4,6,2};
    int sum = 0;

    for(int i = 0;i<3;i++)
       sum += a[i];

printf("%d",sum);
 return 0;
}
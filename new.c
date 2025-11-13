#include <stdio.h>
int main(){
int A[] = {1,2,4,5,6,3,4,5,3,4,6,3,12,65,8,67,5,3,5,7,87,6,4,2,4,65,7,87,8,8,7,6,56,5,4,3,1,2,4,6,7,8,0,9,8,7,6,4,255,7,4,2,5,7,0,9,1,2,4,6,7,5,4,9,6,7};
int b,c=0;
printf("Enter any desired value: ");
scanf("%d", &b);
int l = sizeof(A)/sizeof(A[0]);
int i = 0;
for (i=0;i<=l;i++){
    if(A[i]== b){
    c++;}
    }    
if (c>0){
    printf("Yes the element is there is system defined array and its frequency is: %d\n", c);
}
else{
    printf("Such number was not preseny in the system defined array\n");
}
return 0;
}


#include<stdio.h>
Int main (){
Int i,j,n, x;
Printf("donner the size of  matrix=");
Scanf("%d",n);
Char mat[n][n];
For(i=0;i<n;i++){
For(j=0;j<n;j++){
Printf ("donner les elemnt  de matrix[%d][%d]= ", i,j);
scanf ("%d",&mat[i][j]);
} 
}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
x=mat[i][j];
mat[i][j]=mat[j][i];
mat[j][i]=x;}}
for(i=0;i<n;i++){
for(j=0;j<n;j++){
printf(" %3d",mat[i][j]);
}printf("\n");}
return 0;
}

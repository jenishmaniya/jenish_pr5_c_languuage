#include<stdio.h>
void main(){
int n,m,i,j,z;
printf("Enter the array row size: ");
scanf("%d", &n);
printf("Enter the array's column size: ");
scanf("%d", &m);
int a[n][m];
printf("Enter array elements:\n");
for(i=0;i<n;i++){
    for(j=0;j<m;j++) {
    printf("a[%d][%d]",i,j);
    scanf("%d",&a[i][j]);
    }
}
z=a[0][0];
    for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    if(a[i][j]>z){
    z=a[i][j];
    }
    }
}
printf("The largest element is: %d\n",z);
}


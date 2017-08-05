#include<stdio.h>
int main(void)
{
char line[100];
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s",line[i]);
}
for(i=0;line[i]!='\0';i++)
{
if(line[i]='a'||line[i]='e'||line[i]='i'||line[i]='o'||line[i]='u'||line[i]='A'||line[i]='E'||line[i]='I'||line[i]='O'||line[i]='U')
{
printf("the vowels are",a[i]);
}
else if(if((line[i]>='a'&&line[i]<='z')||(line[i]>='A'&&line[i]<='Z')))
{
printf("the consonants are",a[i]);
}
else
{
printf(" digits");
}
}
return 0;
}

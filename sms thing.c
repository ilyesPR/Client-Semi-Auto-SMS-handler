#include <stdio.h>

#define y "\033[33m"
#define b "\033[36m"
#define r "\033[31m"
#define g "\033[32m"
#define clr "\033[0m"

typedef struct cust{
char robe[10];
char color[10];
char size[5];
char contractNumber[10];
char weddingDate[9];
char lname[20];
char fname[20];
char number[11];
char priceLeft[6];
char priceTotal[6];
}cust;


//      shamsa pink 42 3571/2025 20250510 messmada saida 0660549525 3500 8000

int main () {
int n,i;
char k;

while(1) {
system("cls");
printf("\nWelcome to the SMS sending service app.\n\n");
printf("Please choose :");
printf(clr"         1."b"jour-1");
printf(clr"   2."y"retour");
k = getch();
printf(clr"\n\nHow many customers are there today? : ");
scanf("%d",&n);
printf("\nPlease provide their info with the following form :");
printf("\n\n\tROBE | COLOR | SIZE | CONTRACT-NUMBER | LAST-NAME | FIRST-NAME | PHONE-NUMBER | REST | TOTAL \n\n");
cust x[n];
for (i=0;i<n;i++) {
scanf("%s %s %s %s %s %s %s %s %s %s",
&x[i].robe,
&x[i].color,
&x[i].size,
&x[i].contractNumber,
&x[i].weddingDate,
&x[i].lname,
&x[i].fname,
&x[i].number,
&x[i].priceLeft,
&x[i].priceTotal
      );
}

FILE *fp;
fp = fopen("C:/smsTemp/smsout/mysms.sml", "w");


printf("\n");
if (k=='1') {
for (i=0;i<n;i++) {
fprintf(fp,"%s Hello there %s %s, we would like to remind you that you rented a %s %s %s from us for you to take at %s, you have %sda left of %sda, please come soon and don't forget your ID\n",
x[i].number,
x[i].lname,
x[i].fname,
x[i].robe,
x[i].color,
x[i].size,
x[i].weddingDate,
x[i].priceLeft,
x[i].priceTotal
);
}
} else if (k=='2') {
for (i=0;i<n;i++) {
fprintf(fp,"%s Hello there %s %s, we would like to remind you that you need to be returning a %s %s %s from us for you to took at %s, come before 12! \n",
x[i].number,
x[i].lname,
x[i].fname,
x[i].robe,
x[i].color,
x[i].size,
x[i].weddingDate
);
}
}
printf("--------------------------------------------------------");
printf("\n\nWould you like to continue?            1."g"Yes"clr"    2."r"No\n\n"clr);
k = getch();
if (k=='2') {
    goto exit;
} else {
printf("--------------------------------------------------------");
}


}
exit:;
printf(clr"");
}

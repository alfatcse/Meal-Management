#include<stdio.h>
typedef struct data
{
    char name[100];
    int g[4];
    float meal[31];
} data;
int main()
{
    FILE *input,*output,*save;
    input=fopen("messinput.txt","r");
    output= fopen("messoutput.txt","w");
    save=fopen("save.txt","a");
    int a,c,e,q,o,w,z,s,x,u,J,K,O;
    char y[10],t[10];
    float d=0,f=0,k=0,l=0,p=0,H,M=0;
    {
    fscanf(input,"%d%d",&s,&x);
    fscanf(input,"%d",&a);
    fscanf(input,"%d",&q);
    data b[a];
    float n[a];
    int L[a];
    fscanf(input,"%s",&y);
    for(z=0;z<31;z++)
    {fscanf(input,"%d",&w);}
     fscanf(input,"%s",&t);
      for(z=0;z<31;z++)
      {
          fscanf(input,"%f",&H);
          M=M+H;
      }
   for(c=0; c<a; c++)
    {
        n[c]=0;
        L[c]=0;
        fscanf(input,"%s",&b[c].name);
        for(J=0;J<4;J++)
        {fscanf(input,"%d",&b[c].g[J]);
        d=d+b[c].g[J];
        L[c]=L[c]+b[c].g[J];
        }
        for(e=0; e<31; e++)
        {
            fscanf(input,"%f",&b[c].meal[e]);
            f=f+b[c].meal[e];
            n[c]=n[c]+b[c].meal[e];
        }
    }
    fprintf(save,"*****************************************************************\n");
    o=d-q;
    if(o!=M)
     {fprintf(output,"Error\n");}
    else
    {k=o/f;
    fprintf(output,"Date %d.%d\n",s,x);
    fprintf(output,"Total t.k: %.2f \n",d);
    fprintf(output,"Total meal: %.2f \n",f);
    fprintf(output,"Total Bazar:%.2f\n",M);
    fprintf(output,"Meal rate of this month:%.2f \n",k);
    fprintf(output,"Name\tTotal meal\tGiveback\tGetback\n\n");
    fprintf(save,"Date %d.%d\n",s,x);
    fprintf(save,"Total t.k: %.2f \n",d);
    fprintf(save,"Total meal: %.2f \n",f);
    fprintf(save,"Total Bazar:%.2f\n",M);
    fprintf(save,"Meal rate of this month:%.2f \n",k);
    fprintf(save,"Name\tTotal meal\tGiveback\tGetback\n\n");
    for(c=0; c<a; c++)
    {
        p=L[c]-k*n[c];
        if(p>0)
        {
            fprintf(output,"%s\t  %.2f\t\t\t\t%.2f tk.\n",b[c].name,n[c],p);
            fprintf(save,"%s\t  %.2f\t\t\t\t%.2f tk.\n",b[c].name,n[c],p);
        }
        else
        {
            fprintf(output,"%s\t  %.2f\t\t%.2f tk.\n",b[c].name,n[c],p*-1);
            fprintf(save,"%s\t  %.2f\t\t%.2f tk.\n",b[c].name,n[c],p*-1);
        }
      }
    }
    fprintf(output,"**************************Bazar list of next month***************************************\n");
    printf("Enter the day duration of gonig Bazer:");
    scanf("%d",&K);
    char R[100][10];
    for(O=1;O<=31;O=O+K)
    {printf("Enter name of person of  going Bazer of this date %d:",O);
     scanf("%s",R[O]);
     printf("\n");
     fprintf(output,"%d.%d.%d %s\n",O,s,x,R[O]);
    }
    fprintf(save,"*****************************************************************\n");}
    getch();
    return 0;
}

#include<stdio.h>

struct clientData{
    int acctNum;
    char lastName[15];
    char firstName[10];
    double balance;

};

int main(void) {
     FILE *cfPtr;
      struct clientData  client={0,"","",0.0};
       if((cfPtr=fopen("credit.dat","rb"))==NULL)
    {
        printf("File could not be opened.\n");
    }
    else{
       printf("%-6s%-16s%-11s%10s\n","Acct","Last Name","First Name","Balance");
       printf("%-6s%-16s%-11s%10s\n","29","Singh","Uday","314.33");
        while(!feof(cfPtr)){
            fread(&client,sizeof(struct clientData),1,cfPtr);

            if (client.acctNum!=0){
                printf("%-6d%-16s%-11s%10.2f\n",
                client.acctNum,client.lastName,client.firstName,client.balance);
            }
        }
        fclose(cfPtr);
    }
    return 0;
    }
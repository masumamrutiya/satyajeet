// queation--------------1-1-------------------------//


// #include <stdio.h>

// int main(){
//     FILE *a;
//     a=fopen("index.txt","r");

//     char data[100];

//     if(a==NULL){
//         printf("not exsit files");
//     }else{
//         while(fgets(data,50,a)!=NULL){
//             printf("%s",data);
//             fclose(a);
//         }
//     }
//     return 0;
//   }

// queation--------------1-2--------------------/////


// #include <stdio.h>

// int main()
// {
//    FILE *a;
//     a=fopen("index.txt","w");

//     char data[100];

//     if(a==NULL){
//         printf("not exsit files");
//     }else{
//         fputs("hii men",a);
//         fclose(a);
//     }
//     return 0;
   
// }




// queation-----------1-3--------------------////



// #include <stdio.h>

// int main()
// {
//    FILE *a;
//     a=fopen("index.txt","a");

//     char data[100];

//     if(a==NULL){
//         printf("not exsit files");
//     }else{
//         fputs("hello satubha",a);
//         fclose(a);
//     }
//     return 0;
   
// }




//------------------------------------------------- saval bijo------------------------------//

// #include <stdio.h>
// #include <string.h>

// struct passenger{
//     char => name[100]; 
//     int  => age;
//     char => gender[30];
//     char => form[40];
//     int => payment[30];
//     int => train;
// };

// int main()
// {
    

//     return 0;
// }

#include <stdio.h>
#include <string.h>
struct pesanger 
{
    char name[80];
    int  age;
     char to[50];
    char from[60];
    char gender[20];
    
   
    int payment;
};
int main()
{
    struct pesanger e[20];
    int passengerN;
    printf("Enter Train Number ");
    scanf("%d",&passengerN);
    for(int i=0; i<=passengerN; i++){
        printf("Enter the name ");
        scanf("%s",&e[i].name);

         printf("Enter the age ");
        scanf("%d",&e[i].age);

         printf("Enter the gender ");
        scanf("%s",&e[i].gender);

        printf("Enter the from ");
        scanf("%s",&e[i].from);

         printf("Enter the to ");
        scanf("%s",&e[i].to);

         printf("Enter the payment");
        scanf("%d",&e[i].payment);
    }
    for(int i=0; i<=passengerN; i++){
        printf("%s\n",e[i].name);
        printf("%d\n",e[i].age);
        printf("%s\n",e[i].gender);
        printf("%s\n",e[i].from);
        printf("%s\n",e[i].to);
        printf("%d\n",e[i].payment);
    }
     return 0;
}
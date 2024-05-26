#include<stdio.h>
	struct book{
		 char name[30];	 
		 int price;
		 
		 char author[20];
		 	};
			 	 struct book s[5];
		 	main()
			 {
			 
			 	int i;
			 FILE*fp;
			 fp=fopen("book.dat","w+b");
			 if(fp==NULL)
			 {
			 	printf("file ant be cerated");
			 }	
			
			 for(i=0;i<5;i++)
			 {
			 	printf("name");
			 	scanf("%s",s[i].name);
			 	printf("price");
			 	scanf("%d",&s[i].price);
			 	printf("author");
			 	scanf("%s",&s[i].author);
			 
			 fprintf(fp,"%s\t %d\t %s\n",s[i].name,s[i].price,s[i].author);
			 
			 }
			 fclose(fp);
		}
		 	

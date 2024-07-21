FILE *openn(char *argv2)
{
	FILE *f=NULL;
	f=fopen(argv2,"r");
	if(f==NULL)
	{
		printf("there is an error");
		exit(1);
	}
	return f;
}
void  count_caracter(FILE *f)
{
	long pst;
	fseek(f,0,SEEK_END);
	pst=ftell(f);
	printf("%ld",pst);
	fclose(f);
}
void count_lines(FILE *f,char *argv2)
{
	f=fopen(argv2,"r");
	int lg;
	char m[300];
	int line=0;
	do
	{
	    fgets(m,300,f);
		line++;
	}while(feof(f)!=1);
	lg=line-1;
	printf("%d",lg);
	fclose(f);
}
void count_word(FILE *f,char *argv2)
{
	f=fopen(argv2,"r");
	int ch=0;
	int s;
	char chaine[10000];
	do
	{
		fscanf(f,"%s",chaine);
		ch++;
	}while(feof(f)!=1);
	s=ch-1;
	printf("%d",s);
	fclose(f);
}
void count_maxword(FILE *f,char *argv2)
{
	f=fopen(argv2,"r");
	char ligne[300];
	int cmax=0;
	int lch;
	while(feof(f)!=1)
	{
		fgets(ligne,300,f);
		lch=strlen(ligne);
		if(lch>cmax)
		{
			cmax=lch-1;
		}
	}
	printf("%d",cmax);
	fclose(f);
}
void option(FILE *f,char *argv1,char *argv2)
{
	f=fopen(argv2,"r");
	if(strcmp(argv1,"-m")==0 || strcmp(argv1,"--chars")==0)	
	{
		count_caracter(f);
	}
	else if(strcmp(argv1,"-l")==0 || strcmp(argv1,"--lines")==0)
	{
		count_lines(f,argv2);
	}
	else if(strcmp(argv1,"-w")==0 || strcmp(argv1,"-w")==0)
	{
		count_word(f,argv2);
	}
	else if(strcmp(argv1,"-L")==0 || strcmp(argv1,"--max-line-lenght")==0)
	{
		count_maxword(f,argv2);
	}
	else
	{
		printf("OPTION NOT FOUND");
	}
	fclose(f);
}


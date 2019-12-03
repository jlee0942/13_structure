#define MAX_NAME	30


//make structure
struct keytab{
	int nums;				//save how many times
	char name[MAX_NAME];	//save which keyword it is
};

//declare instances
struct keytab keywrds[13]={
	{0,"int"},
	{0,"float"},
	{0,"return"},
	{0,"if"},
	{0,"for"},
	{0,"while"},
	{0,"goto"},
	{0,"switch"},
	{0,"case"},
	{0,"void"},
	{0,"default"},
	{0,"char"},
	{0,"do"}
};

void count_word(char *word){
	
	int i;
	
	//for each keyword
	for(i=0; i<13;i++)
	{
		//if word = i-th keyword	
		if (strncmp(word, keywrds[i].name, strlen(keywrds[i].name))==0)
		{
			//nums++;	
			keywrds[i].nums++;
		}
	
	}
}

void print_word(void){
	
	int i;	
	//for i_th keyword
	for(i=0;i<13;i++)
	{
			printf("%s : %i\n", keywrds[i].name, keywrds[i].nums);
	}
}

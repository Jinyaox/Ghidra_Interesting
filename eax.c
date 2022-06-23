int in_eax(int a, int b){
	int eax;
	asm(".intel_syntax noprefix");
	asm("mov %0, eax":"=r"(eax): :"%eax");

	if(eax){return a;}
	else{return b;}
}

int main(void){
	return 0;
}
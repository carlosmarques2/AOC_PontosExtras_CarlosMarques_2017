#include <stdio.h>
#include <stdlib.h>

void R_type(){
	printf("Instrucao do tipo R\n\n");
	printf("Busca Instrucao = IF\n\t");
	printf("LeMem\n\tOrigAALU = 0\n\tlouD = 0\n\tEscreveIR\n\tOrigBALU = 01\n\tOpALU = 00\n\tEscrevePC\n\tOrigPC = 00\n");
	printf("\nBusca de registradores/Decodificacao da instrucao = ID\n\t");
	printf("OrigAALU = 0\n\tOrigBALU = 11\n\tOpALU = 00\n");
	printf("\nExecucao = EXE\n\t");
	printf("OrigAALU = 1\n\tOrigBALU = 00\n\tOpALU = 10\n");
	printf("\nConclusao de tipo R = WB\n\t");
	printf("RegDst = 1\n\tEscreveReg\n\tMemparaReg = 0\n");
}

void beq_type(){
	printf("Instrucao do tipo I - BEQ\n\n");
	printf("Busca Instrucao = IF\n\t");
	printf("LeMem\n\tOrigAALU = 0\n\tlouD = 0\n\tEscreveIR\n\tOrigBALU = 01\n\tOpALU = 00\n\tEscrevePC\n\tOrigPC = 00\n");
	printf("\nBusca de registradores/Decodificacao da instrucao = ID\n\t");
	printf("OrigAALU = 0\n\tOrigBALU = 11\n\tOpALU = 00\n");
	printf("\nConclusao do branch = EXE\n\t");
	printf("OrigAALU = 1\n\tOrigBALU = 00\n\tOpALU = 01\n\tEscrevePCCond\n\tOrigPC = 01\n");
}

void bne_type(){
	printf("Instrucao do tipo I - BNE\n\n");
	printf("Busca Instrucao = IF\n\t");
	printf("LeMem\n\tOrigAALU = 0\n\tlouD = 0\n\tEscreveIR\n\tOrigBALU = 01\n\tOpALU = 00\n\tEscrevePC\n\tOrigPC = 00\n");
	printf("\nBusca de registradores/Decodificacao da instrucao = ID\n\t");
	printf("OrigAALU = 0\n\tOrigBALU = 11\n\tOpALU = 00\n");
	printf("\nConclusao do branch = EXE\n\t");
	printf("OrigAALU = 1\n\tOrigBALU = 00\n\tOpALU = 01\n\tEscrevePCCond\n\tOrigPC = 01\n");
}

void J_type(){
	printf("Instrucao do tipo J\n\n");
	printf("Busca Instrucao = IF\n\t");
	printf("LeMem\n\tOrigAALU = 0\n\tlouD = 0\n\tEscreveIR\n\tOrigBALU = 01\n\tOpALU = 00\n\tEscrevePC\n\tOrigPC = 00\n");
	printf("\nBusca de registradores/Decodificacao da instrucao = ID\n\t");
	printf("OrigAALU = 0\n\tOrigBALU = 11\n\tOpALU = 00\n");
	printf("\nConclusao do Jump = WB\n\t");
	printf("EscrevePC\n\tOrigPC = 10\n");
}

void sw_type(){
	printf("Instrucao do tipo I - SW\n\n");
	printf("Busca Instrucao = IF\n\t");
	printf("LeMem\n\tOrigAALU = 0\n\tlouD = 0\n\tEscreveIR\n\tOrigBALU = 01\n\tOpALU = 00\n\tEscrevePC\n\tOrigPC = 00\n");
	printf("\nBusca de registradores/Decodificacao da instrucao = ID\n\t");
	printf("OrigAALU = 0\n\tOrigBALU = 11\n\tOpALU = 00\n");
	printf("\nCalculo do endereço de memoria = EXE\n\t");
	printf("OrigAALU = 1\n\tOrigBALU = 10\n\tOpALU = 00\n");
	printf("\nAcesso a memoria = MEM\n\t");
	printf("EscreveMem\n\tlouD = 1\n");
}

void lw_type(){
	printf("Instrucao do tipo I - LW\n\n");
	printf("Busca Instrucao = IF\n\t");
	printf("LeMem\n\tOrigAALU = 0\n\tlouD = 0\n\tEscreveIR\n\tOrigBALU = 01\n\tOpALU = 00\n\tEscrevePC\n\tOrigPC = 00\n");
	printf("\nBusca de registradores/Decodificacao da instrucao = ID\n\t");
	printf("OrigAALU = 0\n\tOrigBALU = 11\n\tOpALU = 00\n");
	printf("\nCalculo do endereço de memoria = EXE\n\t");
	printf("OrigAALU = 1\n\tOrigBALU = 10\n\tOpALU = 00\n");
	printf("\nAcesso a memoria = MEM\n\t");
	printf("LeMem\n\tlouD = 1\n");
	printf("\nEtapa de conclusao da leitura de memoria = WB\n\t");
	printf("RegDst = 1\n\tEscreveReg\n\tMemparaReg = 0\n");
}

int main(){
	int n;
    scanf("%d",&n);

	switch(n){
	case 000000:
		R_type();
		break;
	case 000001:
		beq_type();
		break;
	case 000010:
		bne_type();
		break;
	case 000011:
		J_type();
		break;
	case 000100:
		sw_type();
		break;
	case 000101:
		lw_type();
		break;
	default:
		printf("Numero Invalido!\n");
		break;
	}
	return 0;
}

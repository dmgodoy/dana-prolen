%{
#include "y.tab.h"
#include <stdio.h>


%}

%option noyywrap
%option yylineno

letra [a-zA-Z]
digito [0-9]
guionbajo [_]
delimitador [ \t\n]
espacioblanco	{delimitador}+
suma_resta [+-]

%%

"main"			{printf("MAIN\t");ECHO;return MAIN;}
"{"			{printf("INICIO\t");ECHO;return INICIO;}
"}"			{printf("FINBLO\t");ECHO;return FINBLO;}
"begin_declare"		{printf("INICIOV\t");ECHO;return INICIOV;}
"end_declare"		{printf("FINV\t");ECHO;return FINV;}
";"			{printf("PYC\t");ECHO;return PYC;}
","			{printf("COMA\t");ECHO;return COMA;}
"int"			{printf("TIPOSIMPLE\t");ECHO;return TIPOSIMPLE;}
"double"		{printf("TIPOSIMPLE\t");ECHO;return TIPOSIMPLE;}
"bool"			{printf("TIPOSIMPLE\t");ECHO;return TIPOSIMPLE;}
"char"			{printf("TIPOSIMPLE\t");ECHO;return TIPOSIMPLE;}
"void"			{printf("PROCED\t");ECHO;return PROCED;}
"["			{printf("CORIZ\t");ECHO;return CORIZ;}
"]"			{printf("CORDER\t");ECHO;return CORDER;}
"=="			{printf("OPBINARIO_12\t");ECHO;return OPB;}
"="			{printf("ASIG\t");ECHO;return ASIG;}
"if"			{printf("IF\t");ECHO;return IF;}
"else"			{printf("ELSE\t");ECHO;return ELSE;}
"while"			{printf("WHILE\t");ECHO;return WHILE;}
"read"			{printf("READ\t");ECHO;return READ;}
"write"			{printf("WRITE\t");ECHO;return WRITE;}
"switch"		{printf("SWITCH\t");ECHO;return SWITCH;}
"case"			{printf("CASE\t");ECHO;return CASE;}
"default"		{printf("DEFAULT\t");ECHO;return DEFAULT;}
":"			{printf("DOSP\t");ECHO;return DOSP;}
"break"			{printf("BREAK\t");ECHO;return BREAK;}
{digito}+"E+"{digito}+	{printf("CREAL\t");ECHO;return CONSTANTE;}
{digito}+"E-"{digito}+	{printf("CREAL\t");ECHO;return CONSTANTE;}
{digito}+"."{digito}+"E+"{digito}+	{printf("CREAL\t");ECHO;return CONSTANTE;}
{digito}+"."{digito}+"E-"{digito}+	{printf("CREAL\t");ECHO;return CONSTANTE;}
{digito}+ 		{printf("CONSTANTE_E\t");ECHO;return CONSTANTE;}
{digito}+"."{digito}+	{printf("CREAL\t");ECHO;return CONSTANTE;}
"!" 					{printf("OPUNARIO\t");ECHO;return OPU;}
"**"					{printf("OPBINARIO_1\t");ECHO;return OPB;}
"*"					{printf("OPBINARIO_2\t");ECHO;return OPB;}
"/"					{printf("OPBINARIO_3\t");ECHO;return OPB;}
"&&"					{printf("OPBINARIO_4\t");ECHO;return OPB;}
"||"					{printf("OPBINARIO_5\t");ECHO;return OPB;}
"¬|"					{printf("OPBINARIO_6\t");ECHO;return OPB;}
"!="					{printf("OPBINARIO_7\t");ECHO;return OPB;}
"<="					{printf("OPBINARIO_9\t");ECHO;return OPB;}
">="					{printf("OPBINARIO_11\t");ECHO;return OPB;}
"<"					{printf("OPBINARIO_8\t");ECHO;return OPB;}
">"					{printf("OPBINARIO_10\t");ECHO;return OPB;}
")"					{printf("PARDERECHO\t");ECHO;return PARDER;}
"("					{printf("PARIZQUIERDO\t");ECHO;return PARIZ;}
{suma_resta}				{printf("SUMA_RESTA\t");ECHO;return SUMA_RESTA;}
{espacioblanco}				{;}
"\"[^\"\n]*\""				{printf("CADENA\t");ECHO;return CADENA;}
{letra}({letra}|{digito}|{guionbajo})*	{printf("IDENTIFICADOR\t");ECHO;return IDENTIFICA;}
.					{printf("(linea %d) ERROR_LEXICO: token %s\n",yylineno,yytext);}
%%

int main(int argc, char** argv)
{
	int val;
	val= yylex() ;
	while (val != 0)
	{
		printf("\t%d\n",val);
		val= yylex() ;
	}
	return 0;
	
}


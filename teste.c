
#include <stdio.h>
#include <string.h>
#include <include/lib.h>
#include <include/jsmn.h>
#include <include/jsmn.c>
int main(){
	
char *js = 	"{ \"name\" : \"Jack\", \"age\" : 27 }";
jsmn_parser parser;
jsmntok_t tokens[10];

jsmn_init(&parser);

// js - pointer to JSON string
// tokens - an array of tokens available
// 10 - number of tokens available
jsmn_parse(&parser, js, strlen(js), tokens, 10);
return (0);
	
}
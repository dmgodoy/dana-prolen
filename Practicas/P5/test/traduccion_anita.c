//op1 siempre es array                                                                                 
void writePro(atributos* dest,atributos* op1,char* operador,atributos* op2){
    char tmp[20];
    char expresion_str[256];
    char *tipo_des_str;
    expresion_str[0]='\0';
    tmp[0]='\0';
    generateTmp(tmp);
    dest->expr_tmp = strdup(tmp);
    
    if(tipoArray(dest->tipo)==entero){
        
        tipo_dest_str = "Entero";
        
    }else if(tipoArray(dest->tipo)==real){
        
        tipo_dest_str = "Real";
        
    }else{
        printf("WARNING: Tipo de dest desc. en asigArray\n");
        getchar();
    }
    
    char tam_dest_str[50];
    tam_dest_str[0]='\0';
    
    //Miramos si el op2 es un array o no, y si es un array debemos comprobar que sea de la misma dimensión 1d o 2d
    int tipo_OP2 = es_array(op2->tipo);//1 si es array
    int d1_o_d2_OP2=0;
    if(tipo_OP2==1){
        
        if((op1->dimensiones==op2->dimensiones) && (op1->dimensiones==1)){//Si los 2 son vectores
            if((op1->TamDimen1==op2->TamDimen1) &&(dest->TamDimen1==op1->TamDimen1)){
                 sprintf(tam_dest_str,"[%i]",dest->TamDimen1);
                sprintf(expresion_str,"%s %s%s;\nProducto1DArray%s(%s,%i,%s,%i,%s);\n",dtipo2ctipostr(tipoArray(op1->tipo)),dest->expr_tmp,tam_dest_str,tipo_des_str,op1->expr_tmp,op1->TamDimen1,op2->expr_tmp,op2->TamDimen1,dest->expr_tmp);
            }else{
                printf("WARNING: Distintos tamaños para realizar el produto de matrices\n");
            }
        }else{
            if((op1->dimensiones==op2->dimensiones) && (op1->dimensiones==2)){//Si los 2 son matrices
                if((op1->TamDimen1==op2->TamDimen1) && (op1->TamDimen2==op2->TamDimen2)&& (dest->TamDimen1==op1->TamDimen1) && (dest->TamDimen2==op1->TamDimen2)){
                    sprintf(tam_dest_str,"[%i][%i]",dest->TamDimen1,dest->TamDimen2);
                    sprintf(expresion_str,"%s %s%s;\nProducto2DArray%s(%s,%i,%i,%s,%i,%i,%s);\n",dtipo2ctipostr(tipoArray(op1->tipo)),dest->expr_tmp,tam_dest_str,tipo_des_str,op1->expr_tmp,op1->TamDimen1,op1->TamDimen2,op2->expr_tmp,op2->TamDimen1,op2->TamDimen2,dest->expr_tmp);
                }else{
                    printf("WARNING: Distintos tamaños para realizar el produto de matrices\n");
                }
            }else{
                printf("WARNING:Vector y matriz. No se pueden multiplicar.\n");
            }
        }
    }else{
    //El segundo operando no es array
        //Debemos comprobar que tanto el destino como el fuente tengan el mismo tamaño y dimensiones
        if((op1->dimensiones==des->dimensiones) && (op1->dimensiones==1)){//si es de dimension 1 (vector)
            if(op1->TamDimen1==dest->TamDimen1){
                sprintf(tam_dest_str,"[%i]",dest->TamDimen1);
                /* Falta el valor, no estoy segura si es op2->expr_tmp  */
                sprintf(expresion_str, "%s %s%s;\nProducto1D%s(%s,%i,%i,%s);\n",dtipo2ctipostr(tipoArray(op1->tipo)),dest->expr_tmp,tam_dest_str,tipo_des_str,op1->expr_tmp,op1->TamDimen1,op2->expr_tmp,dest->expr_tmp);
            }else{
                printf("WARNING:Vector fuente y destino incompatibles. No se pueden multiplicar.\n");
            }
        }else{
        //Si es de dimension 2 (matriz)
            if((op1->dimensiones==des->dimensiones) && (oop1->TamDimen2==dest->TamDimen2)){
                    sprintf(tam_dest_str,"[%i][%i]",dest->TamDimen1,des->TamDimen2);
                    /* Falta el valor, no estoy segura si es op2->expr_tmp  */
                    sprintf(expresion_str,"%s %s%s;\nProducto2D%s(%s,%i,%i,%i,%s);\n",dtipo2ctipostr(tipoArray(op1->tipo)),dest->expr_tmp,tam_dest_str,tipo_des_str,op1->expr_tmp,op1->TamDimen1,op1->TamDimen2,op2->expr_tmp,dest->expr_tmp);
                }else{
                    printf("WARNING:Matriz fuente y destino incompatibles. No se pueden multiplicar.\n");
                }
            }
        
        }
    }
    //Añadimos la cadena de la expresión
    writeFout(expresion_str);
}
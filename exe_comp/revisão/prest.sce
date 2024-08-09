valor_mercadoria=input("Entre com o valor da mercadoria: ");
parcelas = int(valor_mercadoria/3);
entrada = valor_mercadoria - 2*parcelas;
printf("Entrada: R$ %.2f + 2 parcelas de: R$ %d.", entrada, parcelas);

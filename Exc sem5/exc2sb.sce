mes= input("Entre com o número do mês: ");
if(mes==1 | mes==3| mes==5| mes==7| mes==8| mes==10| mes==12) then
    dia=31;
 
elseif(mes==4 |mes==6 | mes==11)  then
        dia=30;
 
else 
    
    ano= input("Entre com o ano: ")
 
    if (modulo(ano,4)==0 & modulo(ano,100)~=0 | modulo(ano,400)==0) then
        dia=29;
 
else 
    dia=28;
    end
    end

printf("O mês %d tem %d dias\n", mes, dia);

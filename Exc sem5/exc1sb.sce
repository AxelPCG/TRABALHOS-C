sexo= input("Entre com seu sexo <m> para masculino <f> para femino: ", "s");
idade= input("Entre com a idade: ");

if (sexo=='m' & idade >=30) then
    tempo=40
elseif (sexo=='m' &idade<30) then
    tempo=55
elseif(sexo=='f' &idade >=30)then
    tempo=35
    else
    tempo=45
end

printf("Tempo de treinamento = %d minutos\n", tempo);

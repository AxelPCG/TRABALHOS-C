altura= input("Entre com sua altura em metros: ")
sexo= input("Entre com o sexo <f> ou <m>: ", "s")
if (sexo=='m') then
    p=(72.7*altura)-58
else
    p=(62.1*altura)-44.7
end
printf("Seu peso ideal é %.2f", p);

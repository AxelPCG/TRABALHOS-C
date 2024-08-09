while 1
    nmax = input("Entre com um número ímpar: ")
    if modulo(nmax,2)~=0 then
        break
    else
        printf("O número não é ímpar, tente de novo.")
    end
end
i = 1
k = 2
while i > 0 do
    printf("%d ",i)
    if i == nmax then
        k = -2
    end
    i = i + k
end

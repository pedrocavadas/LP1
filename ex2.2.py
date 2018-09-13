def le():
    n1=int(raw_input('Digite o primeiro valor: '))
    n2=int(raw_input('Digite o segundo valor: '))
    return n1,n2
def imp(n1,n2):
    for i in range(n1,n2+1):
        print "{:1d}\n".format(i)

n1,n2=le()
imp(n1,n2)

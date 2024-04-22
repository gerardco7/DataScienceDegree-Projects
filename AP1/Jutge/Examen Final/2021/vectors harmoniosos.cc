#Millora : Els vectors, de fet, no calen per res.
#=> es poden eliminar totes les referències a v !

#Error freqüent : generar tots els vectors i filtrar
#els harmoniosos al final.

import easyinput

#Retorna el nombre de vectors harmoniosos de n bits
#en el vector v, de llargada n, sabent que les seves
#i primeres posicions estan fixades i que en aquelles
#posicions hi ha zeros 0s uns 1s.
    def harmoniosos(n, d, v, i, zeros, uns) : if i == n :
#print(v)
        return 1 else : c = 0 if abs (uns -(zeros + 1)) <= d : v[i] = 0 c += harmoniosos(n, d, v, i + 1, zeros + 1, uns) if abs ((uns + 1) - zeros) <= d : v[i] = 1 c += harmoniosos(n, d, v, i + 1, zeros, uns + 1) return c

            def main() : n, d = easyinput.read(int, int) while n is not None : v =[None] * n print(harmoniosos(n, d, v, 0, 0, 0)) n, d = easyinput.read(int, int)

                                                                                                                                             main()

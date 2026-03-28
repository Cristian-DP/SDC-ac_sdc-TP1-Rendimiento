# Suprima la impresión de funciones declaradas estáticamente (privadas) usando -a**
gprof -a ./Code/test_gprof gmon.out > analysis.txt 

# Elimine los textos detallados usando -b**
gprof -b ./Code/test_gprof gmon.out > analysis-b.txt 

# Imprima solo perfil plano usando -p** 
gprof -p -b ./Code/test_gprof gmon.out > analysis-p-b.txt 

# Imprimir información relacionada con funciones específicas en perfil plano**
gprof -pfunc1 -b ./Code/test_gprof gmon.out > analysis-pfunc1-b.txt 

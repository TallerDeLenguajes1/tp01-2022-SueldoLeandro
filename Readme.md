
## Punto 2
    ### Apartado-A
        * El archivo **"gitignore"** sirve para decirle a Git qué archivos o directorios completos debe ignorar y no subir al repositorio de código.Es **conveniente** incluirlo ya que no todos los archivos y carpetas  son necesarios de gestionar a partir del sistema de control de versiones. Se debe **incluir** cuando hay código que no necesitas enviar a Git, ya sea porque sea privado para un desarrollador en concreto y  no lo necesiten (o no lo deban) conocer el resto de las personas. Pueden ser también archivos binarios con datos que no necesitas mantener en el control de versiones, como  diagramas, instaladores de software, etc.
 Un ejemplo que se puede dar surge cuando se trabaja con sistemas de gestión de dependencias, como npm, Bower, Composer. Al instalar las dependencias se descargan  muchos archivos con documentos, tests, demos, etc. Todo eso no es necesario que se mantenga en el sistema de gestión de versiones, porque no forma parte del código de nuestro  proyecto.Otro claro ejemplo de uso de gitignore son los archivos que crean los sistemas operativos automáticamente, archivos que muchas veces están ocultos y no los vemos, pero que existen. Si no se evita que Git los procese, estarán en el proyecto como cualquier otro archivo de código.
 
 
 
 **Configuraría** el archivo .gitignore de tal manera que no versione carpetas y archivos que no hacen falta tener en cuenta al momento de estar trabajando en un proyecto.Además usando la página gitignore.io sería mas fácil crear y configurar el archivo de la siguiente manera, poniendo de ejemplo el lenguaje C y el visual studio. Se ingresa a la pagina y en el buscardor se ponen las palabras claves haciendo referencia a lenguajes,ide,etc. en nuestro caso el lenguaje C y el IDE visual studio, asi nos creara una configuracion recomendada con los archivos a ignorar.
 
 
 # Punto 3
    ### Apartado-C
        * Se ven la carpeta .vscode y los archivos readme.md, tp1_1.c y tp1_1.exe.
        No hace falta que aparezcan la carpeta .vscode y el tp1_1.exe.

        *En los puntos *ii* y *iii* dan el mismo resultado porque el puntero es una variable que tiene almacenada la direccion de memoria de la variable a la que apunta.
        En el punto 4?¿(me marie) se obtiene una dirección de memoria diferente ya que el puntero al ser una variable posee una dirección de memoria propia que es la que da como resultado.